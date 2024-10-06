//
// Created by SUBRATA on 06/10/2024.
//
int Fibonacci(int n);
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    Fibonacci(n);

}
int Fibonacci(int n) {
    int t1 = 0, t2 = 1;
    int next=t1+t2;
    printf("%d %d",t1,t2);
    for(int i=1;i<n;i++) {
        printf(" %d ",next);
        t1 = t2;
        t2 = next;
        next = t1+ t2;
    }
}