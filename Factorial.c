//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int n,fact=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}