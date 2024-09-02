/*  Converts a Fahrenheit temperature to Celsius */
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
int main(void)
{
    float FahrenheitTemperature;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &FahrenheitTemperature);

    
    
    float CelsiusEquivalent = (FahrenheitTemperature - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", CelsiusEquivalent);

    return 0;
}