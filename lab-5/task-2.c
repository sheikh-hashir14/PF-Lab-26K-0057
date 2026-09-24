#include <stdio.h>

int main(){
    int choice1, choice2, qty, price, total;
    printf("-----HASSAN'S DHABA MENU-----\n");
    printf("1. Drinks\n");
    printf("2. Food\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice1);

    switch(choice1){
        case 1:
            printf("Choose your Drink: \n");
            printf("1. Chai  ~Rs 80\n");
            printf("2. Lassi  ~Rs 150\n");
            
            scanf("%d", &choice2);
            
            switch(choice2){
                case 1:
                    price = 80;
                    printf("Your choice: Chai\n");
                    printf("Enter Quantity ");
                    scanf("%d", &qty);

                    total = qty * price;
                    printf("Your Total: %d", total);
                    break;

                case 2:
                    price = 150;
                    printf("Your Choice: Lassi\n");
                    printf("Enter Quantity: ");
                    scanf("%d", &qty);

                    total = qty * price;
                    printf("Your Total: %d", total);
                    break;

                default:
                    printf("Enter a Valid Choice!");
                    break;
            }
        break;
    case 2:
        printf("Choose your Food: \n");
        printf("1. Paratha  ~Rs 60\n");
        printf("2. Biryani  ~Rs 350\n");
        printf("3. Karahi  ~Rs 900\n");

        scanf("%d", &choice2);

        switch(choice2){
            case 1:
                price = 60;
                printf("Your choice: Paratha\n");
                printf("Enter Quantity ");
                scanf("%d", &qty);
                
                total = qty * price;
                printf("Your Total: %d\n", total);
                break;

            case 2:
                price = 350;
                printf("Your choice: Biryani\n");
                printf("Enter Quantity ");
                scanf("%d", &qty);

                total = qty * price;
                printf("Your Total: %d\n", total);
                break;

            case 3:
                price = 900;
                printf("Your choice: Karahi\n");
                printf("Enter Quantity ");
                scanf("%d", &qty);

                total = qty * price;
                printf("Your Total: %d\n", total);
                break;

            default:
                printf("Enter a Valid Input!\n");
        }
        break;
    default:
        printf("Enter a Valid Input!");
    }
    if(total > 2000){
        int disc_total = total * 0.9;    //10% discount on more than 2000
        printf("Your Bill is Greater than 2000\n");
        printf("Discounted Bill: %d\n", disc_total);
    }
}