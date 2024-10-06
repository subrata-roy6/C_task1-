//
// Created by SUBRATA on 06/10/2024.
//
int oddEvenSeries(int n) {
    int i=1;
    int sum=0;
    while(i<=n) {
        if(i%2==0) {
            sum=sum+i;
            printf("%d\t",i);
        }
        i=i+1;
    }
    return sum;
    }
#include <stdio.h>
int main() {
    int n;
    printf("Enter the range of number:");
    scanf("%d",&n);
    int result= oddEvenSeries(n);
    printf("\nThe sum of the series 2+ 4+ 6+    +n = %d ",result);
}