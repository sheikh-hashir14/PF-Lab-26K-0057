#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float d, x1, x2;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    d = (pow(b, 2) - 4 * a * c);
    if(d>0){
        printf("two Real Roots\n");
        x1 = ((- b + sqrt(d))/(2*a));
        x2 = ((- b - sqrt(d))/(2*a));
        printf("x1: %.2f\nx2: %.2f", x1, x2);
    }
    else if(d==0){
        printf("One Repeated Root\n");
        x1 = - b / (2 * a);
        x2 = x1;
        printf("x1: %.2f\n",x1);
    }
    else{
        printf("Complex Roots\n");
        double p = -b / (2 * a);
        double q = sqrt(fabs(d)) / (2 * a);
        printf("x1: %.2f + %.2fi\nx2: %.2f - %.2fi\n", p, q, p, q);
    }

}