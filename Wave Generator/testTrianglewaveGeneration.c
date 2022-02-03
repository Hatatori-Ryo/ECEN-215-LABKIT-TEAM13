//gcc testTrianglewaveGeneration.c -o triangleWaveGeneration

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int generateTrianglewave(float frequency, float samplingRate, float amplitude, float durationOfExecution){
    int xCounter = 0; // Counter for generating X values
    //float frequency = 30; // Frequecy is in Hertz
    float period = 1/frequency; // Period is in Seconds
    //float samplingRate = 10000.0; // Sampling Rate of Analog-To-Digital Converter
    //float durationOfExecution = 0.1; // Duration of wave generation execution in Seconds
    float dataPoints = samplingRate*durationOfExecution; // Number of data points generated
    //float amplitude = 0.5; // Amplitude of wave in Volts

    // Triangle Wave Generation
    float y = 0;
    for (int j = 0; j < dataPoints; j++) {
        float x = period * (1/dataPoints) * xCounter; // Calculate x values

        if (x<(period/4)) {
            y = 2*(x/period);
        } else if (x<((3*period)/4)) {
            y = (amplitude-(2*(x/period)))+amplitude;
        } else {
            y = (2*(x/period))-(4*amplitude);
        }

        printf("%f, %f\n", x, y);
        xCounter = xCounter + 1;
    }
    printf("Press Enter to Continue");
    while( getchar() != '\n' );
}