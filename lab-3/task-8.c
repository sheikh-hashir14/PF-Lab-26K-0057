#include <stdio.h>

int main(){
    int a, b, quotient, reminder;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);

    quotient = a / b;
    reminder = a % b;
    
    printf("Quotient: %d\nReminder: %d\n", quotient, reminder);

    return 0; 
}