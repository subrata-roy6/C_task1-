//
// Created by SUBRATA on 06/10/2024.
//
int factorial(int);
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result=factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;

}
int factorial(int n) {
    int fact=1, i=1 ;
    while(i<=n) {
        fact=fact*i;
        i=i+1;
    }
    return fact;
}