//
// Created by SUBRATA on 06/10/2024.
//
float FahrentTCel(float);
#include <stdio.h>
int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float value = FahrentTCel(fahrenheit);
    printf("%.2f fahrenheit = %.2f Celcius", fahrenheit, value);

}
float FahrentTCel (float fahrenheit) {
    float celcius;
    celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celcius;
}