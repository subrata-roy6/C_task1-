//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n) {
        if(i%2==0) {
            sum=sum+i;
            printf("%d\t",i);
        }
        i=i+1;
    }
    printf("\nThe sum of the series 2+ 4+ 6+    +n = %d ",sum);
    return 0;
}