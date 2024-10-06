//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    float celsius, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    celsius=((f - 32.0) * 5.0 / 9.0);
    printf("%.2f fahrenheit = %.2f Celsius\n",f, celsius);
    return 0;

}