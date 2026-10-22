#include <stdio.h>

int determinant(int M[5][5], int n){
    if(n==1){
        return M[0][0];
    }
    if(n==2){
        return M[0][0]*M[1][1] - M[0][1]*M[1][0];
    }

    int det = 0;
    int sub [5][5];

    for(int c=0 ; c<n ; c++){
        for(int i=1 ; i<n ; i++){
            int mj = 0;
            for(int j=0 ; j<n ; j++){
                if(j == c){
                    continue;
                }
                sub[i-1][mj++] = M[i][j];
            }
        }
        int sign = (c % 2 == 0) ? 1 : -1;
        det += sign * M[0][c] * determinant(sub, n-1);
    }
    return det;
}

void multiply(int X[5][5], int Y[5][5], int R[5][5], int n){
    int i, j, k;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            R[i][j] = 0;
            for(k = 0; k < n; k++){
                R[i][j] += X[i][k] * Y[k][j];
            }
        }
    }
}

int main(){
    int i, j;
    int A[5][5];
    int rows, columns;

    printf("Enter the number of rows in required matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in required matrix: ");
    scanf("%d", &columns);

    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<columns ; j++){
            printf("Enter the Value of Row %d Column %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // TEST 1: SQUARE/RECTANGULAR MATRIX
    int isSquare;
    if(rows == columns){
        isSquare = 1;
        printf("Square Matrix\n");
    }
    else{
        printf("Rectangular Matrix\n");
        isSquare = 0;
    }

    //TEST 2: ZERO MATRIX
    int isZero = 1;
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<columns ; j++){
            if(A[i][j]!=0){
                isZero = 0;
            }
        }
    }

    if(isZero){
        printf("Zero/Null Matrix\n");
    }

    //TEST 3: DIAGONAL MATRIX
    int isDiagonal = 0;

    if(isSquare){
        isDiagonal = 1;
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                if(i!=j && A[i][j] != 0){
                    isDiagonal = 0;
                }
            }
        }
    }

    if(isDiagonal == 1){
        printf("Diagonal Matrix\n");
    }

    //TEST 4: SCALAR MATRIX
    int isScalar = 0;

    if(isDiagonal){
        isScalar = 1;
        for(i=0 ; i<rows ; i++){
            if(A[i][i] != A[0][0]){
                isScalar = 0;
            }
        }
    }

    if(isScalar == 1){
        printf("Scalar Matrix\n");
    }

    //TEST 5: IDENTITY MATRIX
    int isIdentity = 0;

    if(isScalar == 1 && A[0][0] == 1){
        isIdentity = 1;
    }

    if(isIdentity){
        printf("Identity Matrix\n");
    }

    //TEST 6: UPPER/LOWER TRIANGLUAR MATRIX

    int isUpperTriangular = 0;
    int isLowerTriangular = 0;
    if(isSquare){
        isUpperTriangular = 1;
        isLowerTriangular = 1;
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                if(i>j && A[i][j] != 0){
                    isUpperTriangular = 0;
                }
                if(i<j && A[i][j] != 0){
                    isLowerTriangular = 0;
                }
            }
        }
    }

    if(isUpperTriangular){
        printf("Upper Triangular Matrix\n");
    }
    if(isLowerTriangular){
        printf("Lower Triangular Matrix\n");
    }
    
    //TEST 7: SYMMETRIC/SKEW SYMMETRIC MATRIX
    int isSymmetric = 0;
    int isSkewSymmetric = 0;

    if(isSquare){
        isSymmetric = 1;
        isSkewSymmetric = 1;
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                //FOR SYMMETRIC
                if(A[i][j] != A[j][i]){
                    isSymmetric = 0;
                }
                //FOR SKEW SYMMETRIC
                if(A[i][j] != -A[j][i]){
                    isSkewSymmetric = 0;
                }
            }
        }
    }

    if(isSymmetric){
        printf("Symmetric Matrix\n");
    }
    if(isSkewSymmetric){
        printf("Skew Symmetric Matrix\n");
    }

    //TEST 8: ROW MATRIX
    if(rows == 1){
        printf("Row Matrix\n");
    }

    //TEST 9: COLUMN MATRIX
    if(columns == 1){
        printf("Column Matrix\n");
    }
    
    //TEST 10: SINGULAR/NON-SINGULAR MATRIX
    if(isSquare){
        int det = determinant(A, rows);
    
        if(det == 0){
            printf("Signular Matrix\n");
        }
        else{
            printf("Non-Singular Matrix\n");
        }
    }

    // TEST 11: IDEMPOTENT MATRIX
    int C[5][5];
    if(isSquare){
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                C[i][j] = 0;
                for(int k=0 ; k<rows; k++){
                    C[i][j] += A[i][k] * A[k][j];
                }
            }
        }
    }

    int isIdempotent = 0;
    if(isSquare){
        isIdempotent = 1;
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                if(A[i][j] != C[i][j]){
                    isIdempotent = 0;
                }
            }
        }
    }

    if(isIdempotent){
        printf("Idempotent Matrix\n");
    }


    //TEST 12: NILPOTENT MATRIX
    int isNilpotent = 0;

    if(isSquare){
        int Pow[5][5], Temp[5][5];

        // Pow starts as A^1
        for(i=0 ; i<rows ; i++){
            for(j=0 ; j<columns ; j++){
                Pow[i][j] = A[i][j];
            }
        }

        for(int k=1 ; k<=rows && !isNilpotent ; k++){
            // 1. check whether the current power is the zero matrix
            int powIsZero = 1;
            for(i=0 ; i<rows ; i++){
                for(j=0 ; j<columns ; j++){
                    if(Pow[i][j] != 0){
                        powIsZero = 0;
                    }
                }
            }

            if(powIsZero){
                isNilpotent = 1;
            }
            else{
                // 2. Pow = Pow x A (via Temp, never in place)
                multiply(Pow, A, Temp, rows);
                for(i=0 ; i<rows ; i++){
                    for(j=0 ; j<columns ; j++){
                        Pow[i][j] = Temp[i][j];
                    }
                }
            }
        }
    }

    if(isNilpotent){
        printf("Nilpotent Matrix\n");
    }
    
    //TEST 13: EQUAL MATRIX
    char equal_test;
    printf("Compare with another matrix? (y/n): ");
    scanf(" %c", &equal_test);

    if(equal_test == 'y' || equal_test == 'Y'){
        int B[5][5];
        int rowsB, columnsB;

        printf("Enter the number of rows in second matrix: ");
        scanf("%d", &rowsB);
        printf("Enter the number of columns in second matrix: ");
        scanf("%d", &columnsB);

        for(i=0 ; i<rowsB ; i++){
            for(j=0 ; j<columnsB ; j++){
                printf("Enter the Value of Row %d Column %d (B): ", i+1, j+1);
                scanf("%d", &B[i][j]);
            }
        }

        int isEqual = 1;
        if(rows != rowsB || columns != columnsB){
            isEqual = 0;
        }
        else{
            for(i=0 ; i<rows ; i++){
                for(j=0 ; j<columns ; j++){
                    if(A[i][j] != B[i][j]){
                        isEqual = 0;
                    }
                }
            }
        }

        if(isEqual){
            printf("Equal Matrix\n");
        }
        else{
            printf("Matrices are not equal\n");
        }
    }

    return 0;
}



//for(i=0 ; i<rows ; i++){
//        printf("[ ");
//        for(j=0 ; j<columns ; j++){
//            printf("%d ", C[i][j]);
//        }
//        printf("]\n");
//    }