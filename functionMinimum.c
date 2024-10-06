//
// Created by SUBRATA on 06/10/2024.
//
int minimum(int num1, int num2, int num3) {
        if (num1 > num2)
                return num2;
        else if (num1 > num3)
                return num3;
        else
                return num1;
}
#include <stdio.h>
int main() {
        int num1, num2, num3 ;
        printf("Enter the three number: ");
        scanf("%d%d%d", &num1, &num2, &num3);
        int value=minimum( num1, num2, num3);
        printf("The minimum number is %d", value);
        return 0;
}