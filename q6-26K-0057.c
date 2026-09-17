#include <stdio.h>;

int main(){
    int actual_amt;
    float saved_amt = 0;
    float amt_after_discount = 0;

    printf("Enter your Total Cost: ");
    scanf("%d", &actual_amt);

    if(actual_amt >= 500 && actual_amt < 2000){
        saved_amt = 0.05 * actual_amt;
        amt_after_discount = actual_amt - saved_amt;
        printf("ACtual Amount: %d\nSaved Amount: %.2f\nAmount After Discount: %.2f\n", actual_amt, saved_amt, amt_after_discount);
    }
    else if(actual_amt >= 2000 && actual_amt < 4000){
        saved_amt = 0.1 * actual_amt;
        amt_after_discount = actual_amt - saved_amt;
        printf("ACtual Amount: %d\nSaved Amount: %.2f\nAmount After Discount: %.2f\n", actual_amt, saved_amt, amt_after_discount);
    }
    else if(actual_amt >= 4000 && actual_amt < 6000){
        saved_amt = 0.2 * actual_amt;
        amt_after_discount = actual_amt - saved_amt;
        printf("ACtual Amount: %d\nSaved Amount: %.2f\nAmount After Discount: %.2f\n", actual_amt, saved_amt, amt_after_discount);
    }
    else if(actual_amt > 6000){
        saved_amt = 0.35 * actual_amt;
        amt_after_discount = actual_amt - saved_amt;
        printf("ACtual Amount: %d\nSaved Amount: %.2f\nAmount After Discount: %.2f\n", actual_amt, saved_amt, amt_after_discount);
    }
    else{
        printf("Not Eligible for Discount\n");
        printf("ACtual Amount: %d\nSaved Amount: %.2f\nAmount After Discount: %.2f\n", actual_amt, saved_amt, amt_after_discount);
    }
    return 0;
}