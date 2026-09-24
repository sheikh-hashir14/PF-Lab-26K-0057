#include <stdio.h>

int main(){
    int year;

    printf("----------LEAP YEAR CHECKER----------\n");
    printf("Enter the Year to check: ");
    scanf("%d", &year);

    ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("%d is a Leap Year\nFebruary has 29 days\n", year) : printf("%d is NOT a Leap year\nFebruray has 28 Days\n", year);
}