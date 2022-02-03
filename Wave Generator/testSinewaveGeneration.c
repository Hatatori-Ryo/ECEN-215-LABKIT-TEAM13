//gcc testSinewaveGeneration.c -o sineWaveGeneration

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int generateSinewave(float frequency, float samplingRate, float amplitude, float durationOfExecution) {
    int i = 0; // Counter for generating X values
    //float frequency = 1200; // Frequecy is in Hertz
    float period = 1/frequency; // Period is in Seconds
    //float samplingRate = 1000.0; // Sampling Rate of Analog-To-Digital Converter
    //float durationOfExecution = 1; // Duration of sinewave generation execution in Seconds
    float dataPoints = samplingRate*durationOfExecution; // Number of data points generated
    //float amplitude = 2; // Amplitude of wave in Volts

    // Sine Wave Generation
    for (int j = 0; j < dataPoints; j++) {
        float x = period * (1/dataPoints) * i; // Calculate x values
        float radians = x * 2 * M_PI / period; // Calculate radian values for each x value

        float y = amplitude * sin(radians); // Modify Y values by amplitude factor
        printf("%f, %f\n", x, y);
        i = i + 1;
    }
    printf("Press Enter to Continue");
    while( getchar() != '\n' );
}