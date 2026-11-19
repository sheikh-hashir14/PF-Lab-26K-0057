//make a file, add text to that file

#include <stdio.h>

int main(){
    char data[2][50];

    printf("Enter your name: ");
    fgets(data[0], 30, stdin);

    printf("Enter your City: ");
    fgets(data[1], 20, stdin);

    FILE *fptr;
    fptr = fopen("data.txt", "w");

    fprintf(fptr, "Name: %s", data[0]);
    fprintf(fptr, "City: %s", data[1]);
    fclose(fptr);
    printf("success");
    return 0;
}