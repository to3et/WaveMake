//
// Created by to3et on 2020/07/24.
//

#ifndef WAVEMAKE_OSCILLATOR_H
#define WAVEMAKE_OSCILLATOR_H

#include <atomic>
#include <stdint.h>


class Oscillator {
public:
        void setWaveOn(bool isWaveOn);
        void setSampleRate(int32_t sampleRate);
        void render(float *audioData, int32_t numFrames);

private:
        std::atomic<bool> isWaveOn_{false};
        double phase_ = 0.0;
        double phaseIncrement_ = 0.0;
};



#endif //WAVEMAKE_OSCILLATOR_H
