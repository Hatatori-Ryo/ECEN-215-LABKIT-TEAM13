//gcc testSquarewaveGeneration.c -o squareWaveGeneration

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int generateSquarewave(void){
    int xCounter = 0; // Counter for generating X values
    float frequency = 20; // Frequecy is in Hertz
    float period = 1/frequency; // Period is in Seconds
    float samplingRate = 10000.0; // Sampling Rate of Analog-To-Digital Converter
    float durationOfExecution = 0.1; // Duration of sinewave generation execution in Seconds
    float dataPoints = samplingRate*durationOfExecution; // Number of data points generated
    float amplitude = 1.0; // Amplitude of wave in Volts
    int offset = 1; // Voltage offset

    // Square Wave Generation
    float y = 0;
    for (int j = 0; j < dataPoints; j++) {
        float x = period * (1/dataPoints) * xCounter; // Calculate x values
        if (x<(period/2)) {
            y = amplitude + offset;
        } else {
            y = -amplitude + offset;
        }
        printf("%f, %f\n", x, y);
        xCounter = xCounter + 1;
    }
    printf("Press Enter to Continue");
    while( getchar() != '\n' );
}