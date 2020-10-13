#include "TDC.h"
#include <cmath>
#include <iostream>
#include <algorithm>

/**
 *
 * \param[in] numCh The number of DAQ channels used to read out the tdc
 *
 */
TDC::TDC ( int numCh )
{
    tdcRaw.resize( numCh );

    Clear();
}

TDC::~TDC()
{

}

void TDC::Clear()
{
    tdcRaw.assign ( tdcRaw.size(), NAN );
}

/**Set the raw value of the specified channel
 *
 * \param[in] channel The channel of the tdc.
 * \param[in] rawValue The raw DAQ value.
 */
void TDC::SetRawValue ( unsigned int channel, int scintType, unsigned int rawValue, int ignThr )
{	
	tdcRaw.at(channel) = rawValue;
}

///Dummy definition of SetTimeStamp to avoid warning flood about unused variables...
void TDC::SetTimeStamp ( unsigned int detectorChannel, int secondaryType, unsigned long long timestamp )
{
    if ( secondaryType && detectorChannel && timestamp ) {}
}

bool TDC::ValidTDC( size_t ch )
{
    if ( ( int ) ch < 0 || ch >= tdcRaw.size() )
    {
        std::cerr << "ERROR: Invalid anode channel: " << ch << "\n";
        return false;
    }
    return true;
}

int TDC::GetNumChannels ( int scintType )
{
    return tdcRaw.size();
}

ClassImp ( TDC )
