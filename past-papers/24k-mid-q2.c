#include <stdio.h>

int main(){

    int code;
    
    while(1){
        printf("Enter your Security Code: ");
        scanf("%d", &code);

        if((code/100) < 000 && (code/100) > 511){
            printf("Invalid Range. First 3 digits should be 000-511");
            continue;
        }
        else{
            break;
        }
    }

    int part_1 = code / 100;
    
    
    
}