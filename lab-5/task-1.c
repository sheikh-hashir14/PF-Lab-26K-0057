#include <stdio.h>

int main(){

    int inter, test;

    printf("Enter your Intermediate Percentage out of 100: ");
    scanf("%d", &inter);

    printf("Enter your Entry Test Marks out of 100: ");
    scanf("%d", &test);

    if(inter >= 0 && inter <=100 && test >=0 && test <= 100){
        if(inter < 60){
            printf("Not Eligible\n");
        }
    
        else{
            if(test >= 80){
                printf("Admitted with Scholarship\n");
            }
            else if(test >= 50 && test <= 79){
                printf("Admitted\n");
            }
            else{
                printf("Not Admitted\n");
            }
        }
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}