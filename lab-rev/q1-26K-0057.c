#include <stdio.h>

int main(){

    int time;
    printf("Enter the Current Hour of Time in 24 Hour Format [1-24]: ");
    scanf("%d", &time);

    if(time >= 5 && time <= 11){
        printf("Good Morning!\n");
    }
    else if(time >= 12 && time <= 18){
        printf("Good Evening!\n");
    }
    else if(time > 18 && time <= 24){
        printf("Good Night!\n");
    }
    else if(time >= 1 && time < 5){
        printf("You should be sleeping at this time\n");
    }
    else{
        printf("Do You have More than 24 Hours in your clock?\nTry Again with a Valid Input [1-24]");
    }

    return 0;
}