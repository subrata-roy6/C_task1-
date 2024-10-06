//
// Created by SUBRATA on 06/10/2024.
//
int series(int n) {
    int sum = 0;
    for (int i = 1; i <=n; i=i+2) {
        printf("%d\t",i);
        sum= sum + i;
    }
    return sum;
}

#include <stdio.h>
int main() {
        int n=99;
        /*printf("Enter range of series: ");
        scanf("%d", &n);*/
    int result = series(n);
    printf("\nsum of 1+3+5+ ---+99= %d",result);

}