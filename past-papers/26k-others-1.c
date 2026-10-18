#include <stdio.h>

int main(){
    char destination, class, pax_type;
    int base_fare, class_factor, weight, bag_lim, excess_bag_rate;
    float fare, age_discount, disc_fare, tax_factor, tax, baggage_charge = 0;

    printf("-----TICKET PRICE CALCULATOR-----\n");
    printf("L: Lahore\nI: Islamabad\nD: Dubai\nU: London\n");
    
    while(1){
        printf("Enter your Destination: ");
        scanf(" %c",&destination);

        if(destination == 'L'){
            base_fare = 12000;
            tax_factor = 0.05;
            excess_bag_rate = 300;
            break;
        }
        else if(destination == 'I'){
            base_fare = 15000;
            tax_factor = 0.05;
            excess_bag_rate = 300;
            break;
        }
        else if(destination == 'D'){
            base_fare = 60000;
            tax_factor = 0.08;
            excess_bag_rate = 1000;
            break;
        }
        else if(destination == 'U'){
            base_fare = 120000;
            tax_factor = 0.08;
            excess_bag_rate = 1000;
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
            class_factor = 1;
            bag_lim = 20;
            break;
        }
        else if(class == 'B'){
            class_factor = 2;
            bag_lim = 30;
            break;
        }
        else if(class == 'F'){
            class_factor = 3;
            bag_lim = 40;
            break;
        }
        else{
            printf("Invalid Input, [E, B, F]\n");
            continue;
        }
    }

    printf("A: Adult\nC: Child\nS: Senior\n");
    while(1){
        printf("Enter your Age Group: ");
        scanf(" %c", &pax_type);

        if(pax_type == 'A'){
            age_discount = 1;
            break;
        }
        else if(pax_type == 'C'){
            age_discount = 0.5;
            break;
        }
        else if(pax_type == 'S'){
            age_discount = 0.8;
            break;
        }
        else{
            printf("Invalid Input. Try Again [A, C, S]\n");
            continue;
        }
    }

    while(1){
        printf("Enter your Baggage Weight: ");
        scanf("%d", &weight);

        if(weight < 0){
            printf("Weight cannot be negative.\n");
            continue;
        }

        break;
    }
    
    fare = base_fare * class_factor;
    disc_fare = fare * age_discount;
    tax = disc_fare * tax_factor;
    
    if(weight > bag_lim){
        int additional_bagg = weight - bag_lim;
        baggage_charge = additional_bagg * excess_bag_rate;
    }

    float total = disc_fare + tax + baggage_charge;

    printf("Ticket Price: %.2f\n", disc_fare);
    printf("Tax Amount: %.2f\n", tax);
    printf("Baggage Charge: %.2f\n", baggage_charge);
    printf("Total Amount: %.2f\n", total);

    return 0;
}