#include <stdio.h>

int main(){
    int A[3][3], B[3][3], C[3][3];
    int r1, c1, r2, c2;
    int i, j, k;

    do{
        printf("Enter rows of Matrix A (1-3): ");
        scanf("%d", &r1);
        printf("Enter columns of Matrix A (1-3): ");
        scanf("%d", &c1);
    } while(r1 < 1 || r1 > 3 || c1 < 1 || c1 > 3);

    do{
        printf("Enter rows of Matrix B (1-3): ");
        scanf("%d", &r2);
        printf("Enter columns of Matrix B (1-3): ");
        scanf("%d", &c2);
    } while(r2 < 1 || r2 > 3 || c2 < 1 || c2 > 3);

    if(c1 != r2){
        printf("Multiplication not possible: columns of A (%d) must equal rows of B (%d).\n", c1, r2);
        return 0;
    }

    for(i=0 ; i<r1 ; i++){
        for(j=0 ; j<c1 ; j++){
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0 ; i<r2 ; i++){
        for(j=0 ; j<c2 ; j++){
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0 ; i<r1 ; i++){
        for(j=0 ; j<c2 ; j++){
            C[i][j] = 0;
            for(k=0 ; k<c1 ; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for(i=0 ; i<r1 ; i++){
        printf("[ ");
        for(j=0 ; j<c1 ; j++) printf("%d ", A[i][j]);
        printf("]\n");
    }

    printf("\nMatrix B:\n");
    for(i=0 ; i<r2 ; i++){
        printf("[ ");
        for(j=0 ; j<c2 ; j++) printf("%d ", B[i][j]);
        printf("]\n");
    }

    printf("\nResult (A x B):\n");
    for(i=0 ; i<r1 ; i++){
        printf("[ ");
        for(j=0 ; j<c2 ; j++) printf("%d ", C[i][j]);
        printf("]\n");
    }

    return 0;
    
}