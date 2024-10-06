//
// Created by SUBRATA on 06/10/2024.
//
void FahrenheitToCelsius(float[]);
#define size 1
#include <stdio.h>
int main() {
    float temperatures[size];
    int i;
    printf("Enter the temperature in Fahrenheit: ");
    for(i=0; i<1; i++) {
        scanf("%f", &temperatures[i]);
    }
    FahrenheitToCelsius(temperatures);

}
void FahrenheitToCelsius(float fahrenheit[]) {
    float celsius;

    celsius = (fahrenheit[0] - 32) * 5.0 / 9.0;
    printf("\n%.2f fahrenheit= %.2f celsius\n", fahrenheit[0], celsius);
}