#include <stdio.h>

int main(){

    char city[20], country[20], grade;
    int population, area;

    printf("Enter the Name of City you live in: ");
    scanf("%s", &city);

    printf("Enter the Name of Country you live in: ");
    scanf("%s", &country);

    printf("Enter the Area of City you live in: ");
    scanf("%d", &area);

    printf("Enter the Population of City you live in: ");
    scanf("%d", &population);

    printf("What Would you grade your city on a scale of A to F? : ");
    scanf(" %c", &grade);

    printf("You live in %s, %s\n", city, country);
    printf("Population: %d\n", population);
    printf("Area: %d\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}