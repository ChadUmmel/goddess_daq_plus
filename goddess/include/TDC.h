#ifndef TDC_H
#define TDC_H

#include "Detector.h"
#include <vector>

class TDC : public Detector
{
private:
    ///Vectory of energies in each tdc channel
    std::vector<float> tdcRaw;

public:
    ///Default constructor.
    TDC(int numCh);
    ///Default destructor.
    virtual ~TDC();

    ///Clear the event.
    void Clear();

    ///Set the raw energy of the contact and compute the calibrated value.
    virtual void SetRawValue(unsigned int channel, int scintType, unsigned int rawValue, int ignThr);
    ///Set the timestamp for the channel.
    virtual void SetTimeStamp(unsigned int detectorChannel, int secondaryType, unsigned long long timestamp);

    ///Return the number of channels of the type specified.
    int GetNumChannels(int scintType);
    
    ///Return the vector of tdc values for an event
    std::vector<float> GetTDC() {
        return tdcRaw;
    };
   
    ///Check if the specified channel has been declared.
    bool ValidTDC(size_t ch);

    /// \cond This is just for ROOT and doesn't need to be documented
    ClassDef(TDC, 1)
    /// \endcond
};

#endif
