//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
int main() {
    int num[70],i,sum=0;
    for(i=0;i<70;i++) {
        num[i]=i+2;
    }
    for(i=0;i<70;i++) {
        sum+=num[i];
    }
    printf("1+3+5+ ---+99=%d ",sum);
}