#include <stdio.h>

int main(){

    int a, b, c;
    printf("Enter first Number A = ");
    scanf("%d", &a);

    printf("Enter second Number b = ");
    scanf("%d", &b);

    printf("Enter third Number c = ");
    scanf("%d", &c);

    (a>b && a>c) ? printf("A is Greatest\n") : (b>a && b>c) ? printf("B is the greates number\n") : printf("C is the greatest number\n");

    return 0;
}