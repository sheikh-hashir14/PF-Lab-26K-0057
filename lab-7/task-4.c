#include <stdio.h>

int main(){
    int cube[3][3][3];
    int l, r, c;

    for(l=0 ; l<3 ; l++){
        for(r=0 ; r<3 ; r++){
            for(c=0 ; c<3 ; c++){
                printf("Enter value for Layer %d Row %d Column %d: ", l+1, r+1, c+1);
                scanf("%d", &cube[l][r][c]);
            }
        }
    }

    int layerTotals[3];
    int grandTotal = 0;
    int overallMax = cube[0][0][0];
    int overallMin = cube[0][0][0];
    int maxL = 0, maxR = 0, maxC = 0;
    int minL = 0, minR = 0, minC = 0;

    for(l=0 ; l<3 ; l++){
        int sum = 0, diag = 0;
        int layerMax = cube[l][0][0], layerMin = cube[l][0][0];
        int rowSum[3] = {0, 0, 0};
        int colSum[3] = {0, 0, 0};

        printf("\n-----Layer %d-----\n", l+1);

        for(r=0 ; r<3 ; r++){
            printf("[ ");
            for(c=0 ; c<3 ; c++){
                int v = cube[l][r][c];
                printf("%d ", v);

                sum += v;
                rowSum[r] += v;
                colSum[c] += v;
                if(r == c) diag += v;

                if(v > layerMax){
                    layerMax = v;
                }
                if(v < layerMin){
                    layerMin = v;
                }

                if(v > overallMax){
                    overallMax = v;
                    maxL = l;
                    maxR = r;
                    maxC = c;
                }
                if(v < overallMin){
                    overallMin = v;
                    minL = l;
                    minR = r;
                    minC = c;
                }
            }
            printf("]\n");
        }

        layerTotals[l] = sum;
        grandTotal += sum;

        printf("Layer total   : %d\n", sum);
        printf("Layer average : %.2f\n", sum / 9.0);
        printf("Layer max/min : %d / %d\n", layerMax, layerMin);
        printf("Diagonal sum  : %d\n", diag);
        for(r=0 ; r<3 ; r++) printf("Row %d sum     : %d\n", r+1, rowSum[r]);
        for(c=0 ; c<3 ; c++) printf("Column %d sum  : %d\n", c+1, colSum[c]);
    }

    int highLayer = 0, lowLayer = 0;
    for(l=1 ; l<3 ; l++){
        if(layerTotals[l] > layerTotals[highLayer]) highLayer = l;
        if(layerTotals[l] < layerTotals[lowLayer])  lowLayer = l;
    }

    printf("\n-----Overall Insights-----\n");
    printf("Grand total     : %d\n", grandTotal);
    printf("Overall average : %.2f\n", grandTotal / 27.0);
    printf("Overall maximum : %d (Layer %d, Row %d, Column %d)\n", overallMax, maxL+1, maxR+1, maxC+1);
    printf("Overall minimum : %d (Layer %d, Row %d, Column %d)\n", overallMin, minL+1, minR+1, minC+1);
    printf("Highest layer   : Layer %d (total %d)\n", highLayer+1, layerTotals[highLayer]);
    printf("Lowest layer    : Layer %d (total %d)\n", lowLayer+1, layerTotals[lowLayer]);

    return 0;
    
}