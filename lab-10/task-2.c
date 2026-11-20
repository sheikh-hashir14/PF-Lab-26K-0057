#include <stdio.h>


int ways(int n){
    
    static int calls = 0;
        if (n == -1) {          // special request: report and reset
        int result = calls;
        calls = 0;
        return result;
    }
    calls++;

    if(n == 0) return 1;
    if(n == 1) return 1;

    return ways(n-1) + ways(n-2);
}

int main(){
    int stairs;
    printf("Enter the number of stairs: ");
    scanf("%d", &stairs);

    int n_ways = ways(stairs);
    printf("Number of Ways: %d\n", n_ways);
}