#include <stdio.h>

int main(){

    int choice;

    printf("-----------POWERFIT GYM SERVICES-----------\n");
    printf("SERVICES: \n");
    printf("1. Slot Availability Check\n");
    printf("2. Membership Eligibility Check\n");
    printf("3. Membership Plan Selection\n");
    printf("4. Discout Check\n");
    printf("5. Personal Trainer Option\n");
    printf("6. Trainer Rating\n");
    printf("7. Diet Consultation Service\n");
    printf("8. Monthly Bill Calculation\n");
    printf("9. Supplement Menu\n");
    printf("10. Late Payment Penalty\n");
    printf("11. Corporate Member Handling\n");
    printf("12. Group Membership Eligibility\n");
    printf("13. Payment Confirmation\n");
    printf("14. Give Feedback & Rating\n");

    printf("Choose your required service: ");
    scanf("%d", &choice);


    switch(choice){
        case 1: //check slot availibility
            printf("----------Check Slot Availibility----------\n");
        
            int booked_slots, total_slots, av_slots;

            total_slots = 10;
            booked_slots = 0;

            printf("total slots: %d\n", total_slots);
            printf("Enter the amount of Booked Slots: \n");
            scanf("%d", &booked_slots);

            //check invalid input
            while(booked_slots>10 || booked_slots<0){
                printf("Please enter a Valid Number, less than or equal than total slots.\n");
                printf("total slots: %d\n", total_slots);
                printf("Enter the amount of Booked Slots: \n");
                scanf("%d", &booked_slots);
            }
            
            //check for availibility
            if(booked_slots == total_slots){
                printf("Sorry! All the slots are currently full. Please check back later.\n");
            }
            else if(booked_slots < total_slots){
                av_slots = total_slots - booked_slots;
                printf("There are %d Slots Available\n", av_slots);
            }

            break;

        case 2: //membership elegibility check
            printf("-----------Membership Elegibility Check-----------\n");

            int age;

            printf("Enter your Age: \n");
            scanf("%d", &age);

            if (age >= 16){
                printf("Viola! You are Eligible for Membership.\n");
            }
            else{
                printf("Sorry, You are not Old enough Yet. Please try again later.\n");
            }
            
            break;

        case 3:
            printf("-----------Membership Plan Selection-----------\n");
            
            int plan_number;

            printf("Choose your Preffered Plan: \n");
            printf("1. Basic\n");
            printf("2. Premium\n");
            printf("3. VIP\n");
            
            printf("Enter Your Plan's Number: \n");
            scanf("%d", &plan_number);

            switch(plan_number){
                case 1:
                    printf("Basic Plan Selected for you.");
                    break;

                case 2:
                    printf("Premium Plan Selected for you.");
                    break;

                case 3:
                    printf("VIP Plan Selected for you.");
                    break;

                default:
                    printf("Invalid Plan Number. Please choose a valid NUMBER.");
            };

            break;

        case 4:
            printf("-----------Discount Offer-----------\n");
            
            int reg_time;
            printf("How many months are you registering for?\n");
            scanf("%d", &reg_time);

            if(reg_time >= 6){
                printf("Congratulations! You are eligible for a 10%% discount\n");
            }
            else{
                printf("You will be Billed at the Base Price.\n");
            }

            break;

        case 5: 
            printf("-----------Personal Trainer Option-----------\n");

            char trainer_choice;
            printf("Do you want a Personal Trainer or not? [Y/N]\n");
            scanf(" %c", &trainer_choice);

            if(trainer_choice == 'Y' || trainer_choice == 'y'){
                printf("That will be an Additional 3000 PKR\n");
            }
            else if(trainer_choice == 'N' || trainer_choice == 'n'){
                printf("No Additional Charges. You will be charged the Base Fee. \n");
            }
            else{
            printf("Invalid Input. Please enter Y/y for Yes or N/n for No. \n");
            }
            
            break;

        case 6:
            printf("-----------Trainer Rating-----------\n");

            int trainer_rating;
            printf("Rate your Trainer from 1 to 5: \n");
            scanf("%d", &trainer_rating);

            switch (trainer_rating){
                case 1:
                    printf("unsatisfactory\n");
                    break;
                case 2:
                    printf("below average\n");
                    break;
                case 3:
                    printf("Average\n");
                    break;
                case 4:
                    printf("Good\n");
                    break;
                case 5:
                    printf("Excelent\n");
                    break;
                default:
                    printf("Please choose a rating from 1 to 5\n");
            }
            break;
        
        case 7:
            printf("----------Diet Consultation Service----------\n");

            char diet_consultant;
            printf("Do you want the Additional Diet Consulation Service? [Y/N]\n");
            scanf(" %c", &diet_consultant);

            if(diet_consultant == 'Y' || diet_consultant == 'y'){
                printf("Confirmed. An Additional Charge of 1000 PKR will be added to your bill.\n");
            }
            else if(diet_consultant == 'N' || diet_consultant == 'n'){
                printf("Confirmed. No Additional Charges will be added\n");
            }
            else{
                printf("Invalid Input. Y/y for Yes or N/n for No\n");
            }

            break;

        case 8:
            printf("----------Monthly Bill Calculation----------\n");

            int plan_choice, months, plan_rate;
            float bill;

            printf("Choose your Preffered Plan: \n");
            printf("1. Basic\n");
            printf("2. Premium\n");
            printf("3. VIP\n\n");
            
            printf("Enter Your Plan's Number: \n");
            scanf("%d", &plan_choice);

            switch(plan_choice){
                case 1:
                    plan_rate = 1300;
                    break;

                case 2:
                    plan_rate = 2500;
                    break;

                case 3:
                    plan_rate = 5000;
                    break;

                default:
                    printf("Invalid Plan Number. Please choose a valid NUMBER.");
            };
            
            printf("How many months are you Registering for?\n");
            scanf("%d", &months);
            
            int charges = months * plan_rate;
            bill = charges + (charges * 0.1);

            printf("Your Total Bill for %d months inclusive of 10\% Tax is %.2f\n", months, bill);

            break;

        case 9:
            printf("----------Supplement Menu----------\n");

            int supplement_choice;

            printf("1. Protein\n");
            printf("2. Creatine\n");
            printf("3. BCAA\n");
            printf("4. Beta Alenine\n");
            
            printf("Enter Your Choice: \n");
            scanf("%d", &supplement_choice);

            switch(supplement_choice){
                case 1:
                    printf("You Chose Protein. Use it for Weight Gain\n");
                    break;

                case 2:
                    printf("You chose Creatine. Increases Energy for Short Duration. \n");
                    break;
                
                case 3:
                    printf("You chose BCAA. Helps reduce Muscle Soreness.\n");
                    break;

                case 4: 
                    printf("You chose Beta Alenine. Used for Fatigue Prevention.\n");
                    break;
                    
                default:
                    printf("Invalid Input. Please choose one of the given options. \n");
                    break;
            };

            break;
        
        case 10:
            printf("----------Payment Date Check----------\n");

            int payment_date;
            printf("Which date did you make your payment?\n");
            scanf("%d", &payment_date);

            if(payment_date > 0 && payment_date <= 10){
                printf("You made your payment on time.\n");
            }
            else if(payment_date > 10 && payment_date <= 31){
                printf("300 PKR additional will be added to your bill for Late Payment.\n");
            }
            else{
                printf("Enter a Valid date between 1 and 31.\n");
            }

            break;

        case 11:
            printf("----------Corporate Employee Check----------\n");

            char corp_employee;

            printf("Are you a Corporate Employee? [Y/N]\n");
            scanf(" %c", &corp_employee);
            
            if(corp_employee == 'Y' || corp_employee == 'y'){
                printf("Congrats! You are eligible for a 20%% discount.\n");
            }
            else if(corp_employee == 'N' || corp_employee =='n'){
                printf("You will be charged the base price.\n");
            }
            else{
                printf("Invalid Input. Enter Y/y for Yes or N/n for No. \n");
            }

            break;
        
        case 12:
            printf("----------Group Membership Eligibility Check----------\n");

            int age1, age2, age3;

            printf("\nEnter the Age of Member 1: ");
            scanf("%d", &age1);
            printf("\nEnter the Age of Member 2: ");
            scanf("%d", &age2);
            printf("\nEnter the Age of Member 3: ");
            scanf("%d", &age3);
            
            if(age1 >= 16 && age2 >= 16 && age3 >= 16){
                printf("You are eligible for Group Membership.\n");
            }
            else{
                printf("You are not eligible for Group Membership. \n");
            }

            break;

        case 13:
            printf("----------Payment Confirmation----------\n");

            char payment_status;
            printf("Have you made your payemnt? [Y/N]\n");
            scanf(" %c", &payment_status);

            if(payment_status == 'Y' || payment_status == 'y'){
                printf("Your Membership is Confirmed. \n");
            }
            else if (payment_status == 'n' || payment_status == 'N'){
                printf("Your membership status is Still Pending until you complete your payemnt. \n");
            }
            else{
                printf("Invalid Input. Please Enter Y/y for Yes or N/n for No. \n");
            }

            break;

        case 14:
            printf("----------Feedback Submission----------\n");
            
            int feedback;

            printf("Give Your Feedback about the Gym and It's Services from 1 to 5. \n");
            scanf("%d", &feedback);

            if(feedback >=4 && feedback <= 5){
                printf("CONGRATS! You got a Free Protein Shake Voucher. Voucher ID: 0462-8286\nEnjoy Your Meal\n");
            }
            else if(feedback >= 1 && feedback < 4){
                printf("We will improve Service. \n");
            }
            else{
                printf("Input Valid Feedback between 1 and 5 only.\n");
            }
            break;
        
        default:
            printf("Please choose one of the Given Options. Enter the NUMBER only.\n");
    };

    return 0;
}