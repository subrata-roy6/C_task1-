//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int n ,count=0,i;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1; i<=n;i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count==2) {
        printf("%d Prime Number",n);
    }
    else {
        printf("%d Not Prime number",n);
    }
    return 0;

}