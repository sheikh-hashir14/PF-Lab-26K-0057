//read data from data.txt and display

#include <stdio.h>

int main(){
    char data[100];
    FILE *fptr;
    fptr =  fopen("data.txt", "r");
    fgets(data, 100, fptr);
    printf("%s", data);
    fgets(data, 100, fptr);
    printf("%s", data);
}