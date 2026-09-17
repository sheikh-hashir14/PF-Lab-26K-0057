#include <stdio.h>

int main(){
    int units;
    float total;
    printf("Enter Electricity Units COnsumed: ");
    scanf("%d", &units);

    if(units<=50){
        total = units*0.50;
        total = total + (0.2*total);
        printf("total: %.2f\n", total);
    }
    else if(units > 50 && units <=150){
        total = 50*0.50;
        total = total + ((units-50)*0.75);
        total = total + (0.2*total);
        printf("total: %.2f\n", total);
    }
    else if(units > 150 && units <=250){
        total = 50*0.50;
        total = total + 100*0.75;
        total = total + ((units-150)*1.20);
        total = total + (0.2*total);
        printf("total: %.2f\n", total);
    }
    else if(units > 250){
        total = 50*0.50;
        total = total + 100*0.75;
        total = total + 100*1.2;
        total = total + ((units-250)*1.50);
        total = total + (0.2*total);
        printf("total: %.2f\n", total);
    }
    return 0;
}