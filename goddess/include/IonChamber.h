#ifndef IONCHAMBER_H
#define IONCHAMBER_H

#include "Detector.h"
#include <vector>

class IonChamber : public Detector
{
private:
    ///The number of anode channels ganged together to make the energy loss signal.
    const int numDE; //!
    ///The number of anode channels ganged together to make the residual energy signal.
    const int numEres; //!

    ///Array of energy in each anode in MeV.
    std::vector<float> hitAnodeRaw;
    std::vector<std::vector<float>> anodeRaw;
    ///The energy (slow) signals from the PMT.
    std::vector<float> hitScintRawE;
    std::vector<std::vector<float>> scintRawE;
    ///The time (fast) signals from the PMT.
    std::vector<float> hitScintRawT;
    std::vector<std::vector<float>> scintRawT;
    ///Array of energy in each position sensitive wire in MeV.
    std::vector<float> hitPosRaw;
    std::vector<std::vector<float>> posRaw;

    ///Array of energy in each anode in MeV.
    std::vector<float> hitAnodeCal;
    std::vector<std::vector<float>> anodeCal;
    ///The energy (slow) signals from the PMT.
    std::vector<float> hitScintCalE;
    std::vector<std::vector<float>> scintCalE;
    ///The time (fast) signals from the PMT.
    std::vector<float> hitScintCalT;
    std::vector<std::vector<float>> scintCalT;
    ///Arrays for the scintillator E and T values
    //float scintArrE;
    //float scintArrT;
    ///Array of energy in each position sensitive wire in MeV.
    std::vector<float> hitPosCal;
    std::vector<std::vector<float>> posCal;

    ///Energy loss in the first anodes in MeV.
    float dE, dECal;
    ///Residual energy after the dE layer in MeV.
    float resE, resECal;
    ///The total energy dE + resE in MeV.
    float E, ECal;
    
    //x and y position from the position sensitive grids
    int posx, posy;
    //x and y hit raw values to compare
    float xRaw, yRaw;
    
    //Multiplicity counters
    int anodeMult, scintMult, posMult, posxMult, posyMult;

    ///The polynomial calibration parameters for the anode.
    std::vector<std::vector<float>> parAnodeEnCal; //!
    ///The polynomial calibration parameters for the scintillator.
    std::vector<std::vector<float>> parScintEnCal; //!
    ///The polynomial calibration parameters for the scintillator time properties.
    std::vector<std::vector<float>> parScintTimeCal; //!
    ///The polynomial calibration parameters for the position grids.
    std::vector<std::vector<float>> parPosEnCal; //!
    
    ///The threshold values for the three subtypes in channel number.
    std::vector<int> threshAnode, threshScint, threshPos;

public:
    ///Default constructor.
    IonChamber(int numAnode, int numDE, int numEres, int numScint, int numPos);
    ///Default destructor.
    virtual ~IonChamber();

    ///Clear the event.
    void Clear();

    void SetAnodeEnCalPars(int ch, std::vector<float> pars);
    void SetScintEnCalPars(int ch, std::vector<float> pars);
    void SetScintTimeCalPars(int ch, std::vector<float> pars);
    void SetPosEnCalPars(int ch, std::vector<float> pars);

    ///Set the raw energy of the contact and compute the calibrated value.
    virtual void SetRawValue(unsigned int channel, int scintType, unsigned int rawValue, int ignThr);
    ///Set the timestamp for the channel.
    virtual void SetTimeStamp(unsigned int detectorChannel, int secondaryType, unsigned long long timestamp);

    ///Return the number of channels of the type specified.
    int GetNumChannels(int scintType);
    
    ///Return the energy loss total for the anode dE section.
    ///Return the calibrated value, if specified.
    float GetAnodeDE(bool doCalibrate) {
        if (doCalibrate) return dECal;
        else return dE;
    };
    ///Return the residual energy loss total for the anode Eres section.
    float GetAnodeResE(bool doCalibrate) {
        if (doCalibrate) return resECal;
        else return resE;
    };
    ///Return the total energy loss.
    float GetAnodeE(bool doCalibrate) {
        if (doCalibrate) return ECal;
        else return E;
    };
    //Return scint signals
    std::vector<float> GetAnodesE(int mult, bool doCalibrate) {
    	if (anodeRaw.size()>mult) {
    		if (doCalibrate) return anodeCal.at(mult);
    		else return anodeRaw.at(mult);
    	}
    	else return {};
    };
    std::vector<float> GetScintE(int mult, bool doCalibrate) {
    	if (scintRawE.size()>mult) {
    		if (doCalibrate) return scintCalE.at(mult);	
    		else return scintRawE.at(mult);
    	}
    	else return {};
    };
    std::vector<float> GetScintT(int mult) {
    	if (scintRawT.size()>mult) return scintRawT.at(mult);
    	else return {};
    };
    std::vector<float> GetPosE(int mult, bool doCalibrate) {
    	if (posRaw.size()>mult) {
    		if (doCalibrate) return posCal.at(mult);
    		else return posRaw.at(mult);
    	}
    	else return {};
    };
    int GetPosx() {
    	return posx;
    };
    int GetPosy() {
    	return posy;
    };

    ///Check if the specified anode channel has been declared.
    bool ValidAnode(size_t ch);
    ///Check if the specified scintillator channel has been declared.
    bool ValidScint(size_t ch);
     ///Check if the specified position channel has been declared.
    bool ValidPos(size_t ch);

    /// \cond This is just for ROOT and doesn't need to be documented
    ClassDef(IonChamber, 1)
    /// \endcond
    
    int GetPosxMultiplicity() {
    	return posxMult;
    }
    int GetPosyMultiplicity() {
    	return posyMult;
    }
    virtual int GetMultiplicity() {
    	return std::max({anodeMult, scintMult, posMult});
    }
    
    ///Specify the thresholds for each channel.
    bool SetThresholds ( std::vector<int> thresholds, int secondaryType, int thrSize = 0 );
    
    ///Get a map of the thresholds.
    std::vector<int> GetThresholds ( int secondaryType );
    
};

#endif
