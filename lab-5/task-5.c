#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    (n & 1) == 1 ? printf("%d is Odd\n", n) : printf("%d is Even\n", n);

    if(n > 0 && (n & (n - 1)) == 0)
        printf("%d IS a power of two\n", n);
    else
        printf("%d is NOT a power of two\n", n);

}