#include "IonChamber.h"
#include <cmath>
#include <iostream>
#include <algorithm>

/**
 * \note We assume the channels are connected with the anodes first in order of beam
 * direction, followed by the scintillator energy and then time for each PMT.
 *
 * \param[in] numAnode The number of DAQ channels used to read out the ion chamber
 *  anodes.
 * \param[in] numDE The number of anodes summed to compute the energy loss.
 * \param[in] numEres The number of anodes summed to compute the residual energy.
 * \param[in] numScint The number of DAQ channels used to read out the scintillator.
 * \param[in] numPos The number of DAQ channels used to read out the position-sensitive
 *	grids 
 *
 */
IonChamber::IonChamber ( int numAnode, int nDE, int nEres, int numScint, int numPos ) :
    numDE ( nDE ), numEres ( nEres )
{
    hitAnodeRaw.resize ( numAnode );
    hitAnodeCal.resize ( numAnode );

    hitScintRawE.resize ( numScint );
    hitScintRawT.resize ( numScint );
    hitScintCalE.resize ( numScint );
    hitScintCalT.resize ( numScint );
    
    hitPosRaw.resize(numPos);
    hitPosCal.resize(numPos);

    parAnodeEnCal.resize ( numAnode );
    parScintEnCal.resize ( numScint );
    parScintTimeCal.resize ( numScint );
    parPosEnCal.resize( numPos );

    Clear();
}

IonChamber::~IonChamber()
{

}

void IonChamber::Clear()
{
    hitAnodeRaw.assign ( hitAnodeRaw.size(), NAN );
    hitAnodeCal.assign ( hitAnodeCal.size(), NAN );

    hitScintRawE.assign ( hitScintRawE.size(), NAN );
    hitScintRawT.assign ( hitScintRawT.size(), NAN );
    hitScintCalE.assign ( hitScintCalE.size(), NAN );
    hitScintCalT.assign ( hitScintCalT.size(), NAN );
    
    hitPosRaw.assign(hitPosRaw.size(), NAN);
    hitPosCal.assign(hitPosCal.size(), NAN);

    dE = NAN;
    dECal = NAN;
    resE = NAN;
    resECal = NAN;
    E = NAN;
    ECal = NAN;
    
    anodeRaw.clear();
    anodeCal.clear();
    scintRawE.clear();
    scintRawT.clear();
    scintCalE.clear();
    scintCalT.clear();
    posRaw.clear();
    posCal.clear();
    
    anodeMult = 0;
    scintMult = 0;
    posMult = 0;
    posxMult = 0;
    posyMult = 0;

    posx=0;
    posy=0;
    
    xRaw = 0;
    yRaw = 0;
}

/**Set the raw value of the specified channel and compute the calibrated value.
 * The dE, resE and E are computed.
 *
 * \param[in] channel The channel of the ion chamber.
 * \param[in] rawValue The raw DAQ value.
 */
void IonChamber::SetRawValue ( unsigned int channel, int scintType, unsigned int rawValue, int ignThr )
{	
	//std::cerr<<"	scintType = "<<scintType<<std::endl;
	//std::cerr<<"		channel = "<<channel<<std::endl;
    if ( scintType==0 && channel < hitAnodeRaw.size() )
    {
    	unsigned int threshold = 0;
    	if ( channel < threshAnode.size() ) threshold = threshAnode.at ( channel );
    	if (ignThr!=0 || (ignThr==0 && rawValue>threshold)) {
		    hitAnodeRaw.at ( channel ) = rawValue;
		    hitAnodeCal.at ( channel ) = 0;
		    
		    if (parAnodeEnCal.at(channel).size()>0) { 
		   		for ( size_t power = 0; power < parAnodeEnCal.at ( channel ).size(); power++ )
		    	{
		        	hitAnodeCal.at ( channel ) += parAnodeEnCal.at ( channel ).at ( power ) * pow ( rawValue, power );
		    	}
		    }
		    else hitAnodeCal.at(channel) = rawValue; //If no calibration parameters are specified, use the raw value.
		    
		    anodeRaw.push_back(hitAnodeRaw);
		    anodeCal.push_back(hitAnodeCal);
        
		    //Compute the dE, Eres, Etot values
		    dE = 0;
		    dECal = 0;
		    for ( int ch = 0; ch < numDE; ch++ )
		    {
		        dE += hitAnodeRaw.at ( ch );
		        dECal += hitAnodeCal.at ( ch );
		    }

		    resE = 0;
		    resECal = 0;
		    for ( int ch = 0; ch < numEres; ch++ )
		    {
		        resE += hitAnodeRaw.at( ch + numDE);
		        resECal += hitAnodeCal.at ( ch + numDE );
		    }
		    E = dE + resE;
		    ECal = dECal + resECal;
			
			anodeMult++;
		}
        

    }

    else if ( scintType==1 && channel < hitScintRawE.size() )
    {
    	unsigned int threshold = 0;
    	if ( channel < threshScint.size() ) threshold = threshScint.at ( channel );
    	if (ignThr!=0 || (ignThr==0 && rawValue>threshold)) {
			hitScintRawE.at ( channel ) = rawValue;
			hitScintCalE.at(channel) = 0;
			
			if (parScintEnCal.at(channel).size()>0) {
				for ( size_t power = 0; power < parScintEnCal.at ( channel ).size(); power++ )
				{
			    	hitScintCalE.at ( channel ) += parScintEnCal.at ( channel ).at ( power ) * pow ( rawValue, power );
				}
			}
			else hitScintCalE.at(channel) = rawValue; //If no calibration parameters are available, use the raw value.
            
        	scintRawE.push_back(hitScintRawE);
        	scintCalE.push_back(hitScintCalE);
        	scintRawT.push_back(hitScintRawT);
        	scintCalT.push_back(hitScintCalT);
        	scintMult++;
        }
    }
    else if ( scintType==2 && channel < hitPosRaw.size() )
    {
    	unsigned int threshold = 0;
    	if ( channel < threshPos.size() ) threshold = threshPos.at ( channel );
    	if (ignThr!=0 || (ignThr==0 && rawValue>threshold)) {
    	
		    hitPosRaw.at ( channel ) = rawValue;
		    hitPosCal.at(channel) = 0;
		    if (parPosEnCal.at(channel).size()>0) {
		    	for ( size_t power = 0; power < parPosEnCal.at ( channel ).size(); power++ )
		    	{
		        	hitPosCal.at ( channel ) += parPosEnCal.at ( channel ).at ( power ) * pow ( rawValue, power );
		    	}
		    }
		    else hitPosCal.at(channel) = rawValue; //If no calibration parameters are specified, use the raw value
		    
			if (channel < 0.5*hitPosRaw.size() ) {
				posxMult++;
				
				//Multiple wires can fire in any one event. This could be due to
				//(1) multiple beam particles in a single event AND/OR
				//(2) nearby wires sharing the charge of one ion.
				//Right now, I'm using a "first past the post" approach where I store
				//the channel of the wire with the highest energy signal in one event
				//and ONLY that channel.
				//If you'd like to do something more complicated, you can use the
				//posE signals saved in the sorted root tree.
				//Or, if you think your method is the correct way to do things for the
				//rest of eternity, you can make the appropriate changes here.
				if (hitPosCal.at(channel)>xRaw) {
					xRaw = hitPosCal.at(channel);
					posx = channel;
				}
			}
			else if (channel >= 0.5*hitPosRaw.size() && channel < hitPosRaw.size()) {
				posyMult++;
				
				//See my above comment.
				//I'm doing the same thing here, but for y channels
				if (hitPosCal.at(channel)>yRaw) {
					yRaw = hitPosCal.at(channel);
					posy = channel - 0.5*hitPosRaw.size();
				}
			}
		
		posRaw.push_back(hitPosRaw);
        posCal.push_back(hitPosCal);
        posMult++;
		}
    }
    
    else
    {
        std::cerr << "ERROR: The channel specified, " << channel << " is not valid! Unable to set the energy.\n";
        return;
    }
}

///Dummy definition of SetTimeStamp to avoid warning flood about unused variables...
void IonChamber::SetTimeStamp ( unsigned int detectorChannel, int secondaryType, unsigned long long timestamp )
{
    if ( secondaryType && detectorChannel && timestamp ) {}
}

bool IonChamber::ValidAnode ( size_t ch )
{
    if ( ( int ) ch < 0 || ch >= hitAnodeRaw.size() )
    {
        std::cerr << "ERROR: Invalid anode channel: " << ch << "\n";
        return false;
    }
    return true;
}

bool IonChamber::ValidScint ( size_t ch )
{
    if ( ( int ) ch < 0 || ch >= hitScintRawE.size() )
    {
        std::cerr << "ERROR: Invalid scintillator channel: " << ch << "\n";
        return false;
    }
    return true;
}

bool IonChamber::ValidPos ( size_t ch )
{
    if ( ( int ) ch < 0 || ch >= hitPosRaw.size() )
    {
        std::cerr << "ERROR: Invalid position grid channel: " << ch << "\n";
        return false;
    }
    return true;
}

void IonChamber::SetAnodeEnCalPars ( int ch, std::vector<float> pars )
{
    if ( ValidAnode ( ch ) )
    {
        parAnodeEnCal.at ( ch ) = pars;
    }
}
void IonChamber::SetScintEnCalPars ( int ch, std::vector<float> pars )
{
    if ( ValidScint ( ch ) )
    {
        parScintEnCal.at ( ch ) = pars;
    }
}
void IonChamber::SetScintTimeCalPars ( int ch, std::vector<float> pars )
{
    if ( ValidScint ( ch ) )
    {
        parScintTimeCal.at ( ch ) = pars;
    }
}

void IonChamber::SetPosEnCalPars ( int ch, std::vector<float> pars )
{
    if ( ValidPos ( ch ) )
    {
        parPosEnCal.at ( ch ) = pars;
    }
}

bool IonChamber::SetThresholds ( std::vector<int> thresholds, int secondaryType, int thrSize )
{
    if ( thrSize == 0 ) thrSize = ( unsigned int ) GetNumChannels ( secondaryType );
    if ( thresholds.size() != ( unsigned int ) thrSize )
    {
        std::cerr << "ERROR: Size of the vector specified for thresholds (" << thresholds.size() << ") was not the one expected (" << thrSize << ")!\n";
        return false;
    }
    if ( secondaryType == 0 )
    {
    	threshAnode = thresholds;
    	return true;
    }
    else if ( secondaryType == 1)
    {
    	threshScint = thresholds;
    	return true;
    }
    else if ( secondaryType == 2 )
    {
        threshPos = thresholds;
        return true;
    }
    else
    {
        std::cerr<< "ERROR:  Thresholds not implemented for this ion chamber subtype"<<std::endl;
        return false;
    }
}

int IonChamber::GetNumChannels ( int scintType )
{
    if ( scintType==0 ) return hitAnodeRaw.size();
    else if (scintType==1) return hitScintRawE.size();
    else if (scintType==2) return hitPosRaw.size();
}

std::vector<int> IonChamber::GetThresholds ( int secondaryType )
{
    if (secondaryType==0) return threshAnode;
    else if (secondaryType==1) return threshScint;
    else if (secondaryType==2) return threshPos;
    else {
    	std::cerr<<"ERROR: Thresholds not implemented for this ion chamber subtype"<<std::endl;
    	return {};
    }
}

ClassImp ( IonChamber )
