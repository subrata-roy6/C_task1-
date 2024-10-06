//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int a[3],min;
    printf("Enter 3 integers number: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    min=a[0];
    for (int i = 0; i < 3; i++) {
        if(a[i]<min) {
            min=a[i];
        }
    }
    printf("Minimum number is %d", min);
    return 0;

}