//
// Created by to3et on 2020/07/24.
//

#ifndef WAVEMAKE_AUDIOENGINE_H
#define WAVEMAKE_AUDIOENGINE_H

#include <aaudio/AAudio.h>
#include "Oscillator.h"

class AudioEngine {
public:
    bool start();
    void stop();
    void restart();
    void setToneOn(bool isToneOn);

private:
    Oscillator oscillator_;
    AAudioStream *stream_;
};


#endif //WAVEMAKE_AUDIOENGINE_H
