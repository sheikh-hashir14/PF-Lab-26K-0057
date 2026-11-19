#include <stdio.h>

void printLastDigit(int num){
    if(num < 10){
        printf("%d", num);
        return;
    }
    printf("%d", num % 10);
    printLastDigit(num / 10);
}

int evenSum(int num){
    if(num == 0) return 0;
    int dig = num % 10;
    return (dig % 2 == 0 ? dig : 0) + evenSum(num / 10);
}

int main(){
    int r_num;

    printf("Enter Your Roll Number: ");
    scanf("%d", &r_num);

    printf("Your Locker Code: ");
    printLastDigit(r_num);
    printf("\n");

    printf("Even-digit Checksum: %d\n", evenSum(r_num));

    return 0;
}