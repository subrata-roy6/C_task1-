//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int n,count=0,fibo;
    printf("Enter the range number: ");
    scanf("%d", &n);
    int st=0,nd=1;
    while(count<n) {
        if(count<=1) {
            fibo=count;
        }
        else {
            fibo=st+nd;
            st=nd;
            nd=fibo;
        }
        printf(" %d ",fibo);
        count++;
    }
}