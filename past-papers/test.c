#include <stdio.h>

int main(){
    char destination, class, pax_type;
    int fare, class_factor, weight;

    printf("-----TICKET PRICE CALCULATOR-----\n");
    printf("L: Lahore\nI: Islamabad\nD: Dubai\nU: London\n");
    
    while(1){
        printf("Enter your Destination: ");
        scanf(" %c",&destination);

        if(destination == 'L'){
            fare = 12000;
            break;
        }
        else if(destination == 'I'){
            fare = 15000;
            break;
        }
        else if(destination == 'D'){
            fare = 60000;
            break;
        }
        else if(destination == 'U'){
            fare = 120000;
            break;
        }
        else{
            printf("Invalid Input [L, I, D, U]\n");
            continue;
        }
    }

    printf("E: Economy\nB: Business\nF: First\n");
    while(1){
        printf("Enter your Class: ");
        scanf(" %c", &class);

        if(class == 'E'){
            
        }
    }

}