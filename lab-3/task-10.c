#include <stdio.h>

int main(){
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("With 1 decimal place: %.1f\n", num);
    printf("With 3 decimal place: %.3f\n", num);

    return 0;
}