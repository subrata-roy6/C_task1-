//
// Created by SUBRATA on 06/10/2024.
//
int oddEven(int);
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    oddEven(num);

}
int oddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is even number",num);
    }
    else {
        printf("%d is odd number",num);
    }
}

