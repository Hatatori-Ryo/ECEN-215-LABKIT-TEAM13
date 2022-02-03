//gcc runWaveGeneration.c -o waveformsGenerated

#include "testSinewaveGeneration.c"
#include "testSquarewaveGeneration.c"
#include "testTrianglewaveGeneration.c"

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void) {
    float samplingRate = 10000.0; // Sampling Rate of Digital-To-Analog Converter in Samples/Second
    float durationOfExecution = 0.1; // Duration of wave generation execution in Seconds

    int userChoiceWaveform = 0; // 0 -> Sinewave
                                // 1 -> Squarewave
                                // 2 -> Trianglewave

    switch(userChoiceWaveform) {
        case 0:
            // SINE WAVE
            float frequencySinewave = 1200; // Frequency in Hertz
            float amplitudeSinewave = 2; // Amplitude of Sine Wave in Volts
            generateSinewave(frequencySinewave, samplingRate, amplitudeSinewave, durationOfExecution);
        
        case 1:
            // SQUARE WAVE
            float frequencySquarewave = 20; // Frequency in Hertz
            float amplitudeSquarewave = 1; // Amplitude of Square Wave in Volts
            int offset = 1; // Offset in Volts
            generateSquarewave(frequencySquarewave, samplingRate, amplitudeSquarewave, durationOfExecution, offset);

        case 2:
            // TRIANGLE WAVE
            float frequencyTrianglewave = 30; // Frequency in Hertz
            float amplitudeTrianglewave = 0.5; // Amplitude of Triangle Wave in Volts
            generateTrianglewave(frequencyTrianglewave, samplingRate, amplitudeTrianglewave, durationOfExecution);
    }
    return 0;
}