#include <stdio.h>

int main(){
    int cube[3][3][3];
    int l, r, c, a, b;

    for(l=0 ; l<3 ; l++){
        for(r=0 ; r<3 ; r++){
            for(c=0 ; c<3 ; c++){
                printf("Enter value for Layer %d Row %d Column %d: ", l+1, r+1, c+1);
                scanf("%d", &cube[l][r][c]);
            }
        }
    }

    for(l=0 ; l<3 ; l++){
        printf("\nLayer %d:\n", l+1);
        for(r=0 ; r<3 ; r++){
            printf("[ ");
            for(c=0 ; c<3 ; c++){
                printf("%d ", cube[l][r][c]);
            }
            printf("]\n");
        }
    }

    int identicalPairs = 0;
    printf("\n-----Layer Comparison-----\n");

    for(a=0 ; a<3 ; a++){
        for(b=a+1 ; b<3 ; b++){
            int diffCount = 0;

            printf("\nLayer %d vs Layer %d:\n", a+1, b+1);

            for(r=0 ; r<3 ; r++){
                for(c=0 ; c<3 ; c++){
                    if(cube[a][r][c] != cube[b][r][c]){
                        diffCount++;
                        printf("  Differs at Row %d Column %d: %d vs %d\n", r+1, c+1, cube[a][r][c], cube[b][r][c]);
                    }
                }
            }

            if(diffCount == 0){
                printf("  Result: IDENTICAL (all 9 elements match)\n");
                identicalPairs++;
            }
            else{
                printf("  Result: DISTINCT (%d differ, %d match)\n", diffCount, 9-diffCount);
            }
        }
    }

    // Summary
    printf("\n-----Summary-----\n");
    printf("Identical pairs: %d of 3\n", identicalPairs);

    if(identicalPairs == 3){
        printf("All three layers are identical.\n");
    }
    else if(identicalPairs == 0){
        printf("All three layers are distinct.\n");
    }
    else{
        printf("Layers are partially similar.\n");
    }

    return 0;
    
}