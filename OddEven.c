//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("Number is even");
    }
    else {
        printf("Number is odd");
    }
    return 0;
}
