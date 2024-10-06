//
// Created by SUBRATA on 06/10/2024.
//
#include <stdio.h>
/*int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1<n2) {
        if(n1<n3) {
            printf("%d is the minimum number", n1);
        }
        else {
            printf("%d is the minimum number", n2);
        }
    }
    else {
        if(n2<n3) {
            printf("%d is the minimum number", n2);
        }
        else {
            printf("%d is the minimum number", n3);
        }
    }
    return 0;
}*/

int main() {
    int n1,n2,n3;
    printf("Enter the three integer number: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2&&n1<n3) {
        printf("%d is the minimum number", n1);
    }
    else if(n2<n1&&n2<n3) {
        printf("%d is the minimum number", n2);
    }
    else {
        printf("%d is the minimum number", n3);
    }
    return 0;
}
