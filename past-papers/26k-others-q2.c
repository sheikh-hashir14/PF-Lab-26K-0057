#include <stdio.h>

int main(){
    int code;
    
    printf("Enter the 5 digit Barcode: ");
    scanf("%d", &code);

    if(code / 10000 == 0){
        printf("Invalid Barcode");
        return 1;
    }
    
    else{
        int dig_5 = code % 10;
        code = code / 10;
        int dig_4 = code % 10;
        code = code / 10;
        int dig_3 = code % 10;
        code = code / 10;
        int dig_2 = code % 10;
        code = code / 10;
        int dig_1 = code;

        if((dig_1 % 2 == 0) && (dig_2 % 3 == 0) && (dig_1 + dig_2 > 7) && (dig_5 != 0)){
            printf("Category 1: High Priority\n");
        }

        else if(((dig_1 % 2 == 0) && (dig_5 % 2 == 0)) || ((dig_2 % 2 != 0) && (dig_4 % 2 != 0))){
            printf("Category 2: Special Stock\n");
        }
        else{
            printf("Category 3: Regular Stock\n");
        }
    }
}