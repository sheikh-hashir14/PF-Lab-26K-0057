#include <stdio.h>

int main(){
    
    
    char B[] = "Burger";
    char F[] = "French Fries";
    char P[] = "Pizza";
    char S[] = "Sandwiches";

    char choice1, choice2, choice3, choice4;
    int qty1, qty2, qty3, qty4;
    int price_B, price_P, price_F, price_S;
    int value1, value2, value3, value4;
    int total;

    price_B = 200;
    price_P = 400;
    price_F = 150;
    price_S = 200;

    printf("B = Burger\n");
    printf("P = Pizza\n");
    printf("F = French Fries\n");
    printf("S = Sandwich\n");

    int types_amount;
    printf("How many types of Snacks you want to order? ");
    scanf("%d", &types_amount);

    switch(types_amount){
        case 1: 
            
            printf("Enter the snack you want to order: ");
            scanf(" %c", &choice1);
            printf("ENter the Quantity: ");
            scanf("%d", &qty1);

            printf("You have Ordered: \n");

            switch(choice1) {
                case 'B':
                    value1 = qty1 * price_B;
                    printf("%d %s (s) value %d PKR", qty1, B, value1);
                    break;
                case 'F':
                    value1 = qty1 * price_F;
                    printf("%d %s (s) value %d PKR", qty1, F, value1);
                    break;
                case 'P':
                    value1 = qty1 * price_P;
                    printf("%d %s (s) value %d PKR", qty1, P, value1);
                    break;
                case 'S':
                    value1 = qty1 * price_S;
                    printf("%d %s (s) value %d PKR", qty1, S, value1);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }                          
            total = value1;
            printf("Total: %d\n", total);
            break;

        case 2: 
            
            printf("Enter the first snack you want to order: ");
            scanf(" %c", &choice1);
            printf("ENter the Quantity: ");
            scanf("%d", &qty1);
            printf("Enter the second snack you want to order: ");
            scanf(" %c", &choice2);
            printf("ENter the Quantity: ");
            scanf("%d", &qty2);


            printf("You have Ordered: \n");

            switch(choice1) {
                case 'B':
                    value1 = qty1 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty1, B, value1);
                    break;
                case 'F':
                    value1 = qty1 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty1, F, value1);
                    break;
                case 'P':
                    value1 = qty1 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty1, P, value1);
                    break;
                case 'S':
                    value1 = qty1 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty1, S, value1);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }
            switch(choice2) {
                case 'B':
                    value2 = qty2 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty2, B, value2);
                    break;
                case 'F':
                    value2 = qty2 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty2, F, value2);
                    break;
                case 'P':
                    value2 = qty2 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty2, P, value2);
                    break;
                case 'S':
                    value2 = qty2 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty2, S, value2);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }                          
            total = value1 + value2;
            printf("Total: %d\n", total);
            break;
        case 3: 
            
            printf("Enter the first snack you want to order: ");
            scanf(" %c", &choice1);
            printf("ENter the Quantity: ");
            scanf("%d", &qty1);
            printf("Enter the second snack you want to order: ");
            scanf(" %c", &choice2);
            printf("ENter the Quantity: ");
            scanf("%d", &qty2);
            printf("Enter the Third snack you want to order: ");
            scanf(" %c", &choice3);
            printf("ENter the Quantity: ");
            scanf("%d", &qty3);
            

            printf("You have Ordered: \n");

            switch(choice1) {
                case 'B':
                    value1 = qty1 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty1, B, value1);
                    break;
                case 'F':
                    value1 = qty1 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty1, F, value1);
                    break;
                case 'P':
                    value1 = qty1 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty1, P, value1);
                    break;
                case 'S':
                    value1 = qty1 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty1, S, value1);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }
            switch(choice2) {
                case 'B':
                    value2 = qty2 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty2, B, value2);
                    break;
                case 'F':
                    value2 = qty2 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty2, F, value2);
                    break;
                case 'P':
                    value2 = qty2 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty2, P, value2);
                    break;
                case 'S':
                    value2 = qty2 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty2, S, value2);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }       
            switch(choice3) {
                case 'B':
                    value3 = qty3 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty3, B, value3);
                    break;
                case 'F':
                    value3 = qty3 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty3, F, value3);
                    break;
                case 'P':
                    value3 = qty3 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty3, P, value3);
                    break;
                case 'S':
                    value3 = qty3 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty3, S, value3);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }                          
            total = value1 + value2 + value3;
            printf("Total: %d\n", total);
            break;
        case 4: 
            
            printf("Enter the first snack you want to order: ");
            scanf(" %c", &choice1);
            printf("ENter the Quantity: ");
            scanf("%d", &qty1);
            printf("Enter the second snack you want to order: ");
            scanf(" %c", &choice2);
            printf("ENter the Quantity: ");
            scanf("%d", &qty2);
            printf("Enter the Third snack you want to order: ");
            scanf(" %c", &choice3);
            printf("ENter the Quantity: ");
            scanf("%d", &qty3);
            printf("Enter the Fourth snack you want to order: ");
            scanf(" %c", &choice4);
            printf("ENter the Quantity: ");
            scanf("%d", &qty4);
            

            printf("You have Ordered: \n");

            switch(choice1) {
                case 'B':
                    value1 = qty1 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty1, B, value1);
                    break;
                case 'F':
                    value1 = qty1 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty1, F, value1);
                    break;
                case 'P':
                    value1 = qty1 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty1, P, value1);
                    break;
                case 'S':
                    value1 = qty1 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty1, S, value1);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }
            switch(choice2) {
                case 'B':
                    value2 = qty2 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty2, B, value2);
                    break;
                case 'F':
                    value2 = qty2 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty2, F, value2);
                    break;
                case 'P':
                    value2 = qty2 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty2, P, value2);
                    break;
                case 'S':
                    value2 = qty2 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty2, S, value2);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }       
            switch(choice3) {
                case 'B':
                    value3 = qty3 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty3, B, value3);
                    break;
                case 'F':
                    value3 = qty3 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty3, F, value3);
                    break;
                case 'P':
                    value3 = qty3 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty3, P, value3);
                    break;
                case 'S':
                    value3 = qty3 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty3, S, value3);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }
            switch(choice4) {
                case 'B':
                    value4 = qty4 * price_B;
                    printf("%d %s (s) value %d PKR\n", qty4, B, value4);
                    break;
                case 'F':
                    value4 = qty4 * price_F;
                    printf("%d %s (s) value %d PKR\n", qty4, F, value4);
                    break;
                case 'P':
                    value4 = qty4 * price_P;
                    printf("%d %s (s) value %d PKR\n", qty4, P, value4);
                    break;
                case 'S':
                    value4 = qty4 * price_S;
                    printf("%d %s (s) value %d PKR\n", qty4, S, value4);
                    break;
                default:
                    printf("Invalid choice");
                    break;
                }                          
            total = value1 + value2 + value3 + value4;
            printf("Total: %d\n", total);
            break;
        
        default:
            printf("Enter a Valid Option [1-4]");
            break;
    }

}