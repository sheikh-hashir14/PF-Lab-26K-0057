#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    int A[3][3];
    int detA;
    int c11, c12, c13, c21, c22, c23, c31, c32, c33;
    float InvA[3][3];
    int AdjA[3][3];
    int A_transpose[3][3];

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("Enter Value for Row %d Column %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("T: Transpose\nD: Determinant\nC: Cofactor\nA: Adjoint\nI: Inverse\n");
    char choice;
    printf("Enter the Operation you want to perform: ");
    scanf(" %c", &choice);

    switch(choice){
        case 'T':
            for(i=0 ; i<3 ; i++){
                for(j=0 ; j<3 ; j++){
                    A_transpose[i][j] = A[j][i];
                }
            }

            for(i=0 ; i<3 ; i++){
                printf("[ ");
                for(j=0 ; j<3 ; j++){
                    printf("%d ", A_transpose[i][j]);
                }
                printf("]\n");
            }
            break;

        case 'D':
            detA = A[0][0]*( A[1][1]*A[2][2] - A[1][2]*A[2][1] ) - A[0][1]*( A[1][0]*A[2][2] - A[1][2]*A[2][0] ) + A[0][2]*( A[1][0]*A[2][1] - A[1][1]*A[2][0] );
            printf("det(A) = %d\n", detA);

            break;
        
        case 'C':
            c11 = pow(-1, 1+1)*(A[1][1]*A[2][2] - A[1][2]*A[2][1]);
            printf("c of a11 = %d\n", c11);
            c12 = pow(-1, 1+2)*(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
            printf("c of a12 = %d\n", c12);
            c13 = pow(-1, 1+3)*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);
            printf("c of a13 = %d\n", c13);
            c21 = pow(-1, 2+1)*(A[0][1]*A[2][2] - A[2][1]*A[0][2]);
            printf("c of a21 = %d\n", c21);
            c22 = pow(-1, 2+2)*(A[0][0]*A[2][2] - A[2][0]*A[0][2]);
            printf("c of a22 = %d\n", c22);
            c23 = pow(-1, 2+3)*(A[0][0]*A[2][1] - A[2][0]*A[0][1]);
            printf("c of a23 = %d\n", c23);
            c31 = pow(-1, 3+1)*(A[0][1]*A[1][2] - A[1][1]*A[0][2]);
            printf("c of a31 = %d\n", c31);
            c32 = pow(-1, 3+2)*(A[0][0]*A[1][2] - A[1][0]*A[0][2]);
            printf("c of a32 = %d\n", c32);
            c33 = pow(-1, 3+3)*(A[0][0]*A[1][1] - A[1][0]*A[0][1]);
            printf("c of a33 = %d\n", c33);

            break;

        case 'A':
            c11 = pow(-1, 1+1)*(A[1][1]*A[2][2] - A[1][2]*A[2][1]);
            c12 = pow(-1, 1+2)*(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
            c13 = pow(-1, 1+3)*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);
            c21 = pow(-1, 2+1)*(A[0][1]*A[2][2] - A[2][1]*A[0][2]);
            c22 = pow(-1, 2+2)*(A[0][0]*A[2][2] - A[2][0]*A[0][2]);
            c23 = pow(-1, 2+3)*(A[0][0]*A[2][1] - A[2][0]*A[0][1]);
            c31 = pow(-1, 3+1)*(A[0][1]*A[1][2] - A[1][1]*A[0][2]);
            c32 = pow(-1, 3+2)*(A[0][0]*A[1][2] - A[1][0]*A[0][2]);
            c33 = pow(-1, 3+3)*(A[0][0]*A[1][1] - A[1][0]*A[0][1]);
            
            AdjA[0][0] = c11; AdjA[0][1] = c21; AdjA[0][2] = c31;
            AdjA[1][0] = c12; AdjA[1][1] = c22; AdjA[1][2] = c32;
            AdjA[2][0] = c13; AdjA[2][1] = c23; AdjA[2][2] = c33;

            printf("Adjoint A is: \n");
            for(i=0 ; i<3 ; i++){
                printf("[ ");
                for(j=0 ; j<3 ; j++){
                    printf("%d ", AdjA[i][j]);
                }
                printf("]\n");
            }
            break;
        
        case 'I':

            detA = A[0][0]*( A[1][1]*A[2][2] - A[1][2]*A[2][1] ) - A[0][1]*( A[1][0]*A[2][2] - A[1][2]*A[2][0] ) + A[0][2]*( A[1][0]*A[2][1] - A[1][1]*A[2][0] );

            c11 = pow(-1, 1+1)*(A[1][1]*A[2][2] - A[1][2]*A[2][1]);
            c12 = pow(-1, 1+2)*(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
            c13 = pow(-1, 1+3)*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);
            c21 = pow(-1, 2+1)*(A[0][1]*A[2][2] - A[2][1]*A[0][2]);
            c22 = pow(-1, 2+2)*(A[0][0]*A[2][2] - A[2][0]*A[0][2]);
            c23 = pow(-1, 2+3)*(A[0][0]*A[2][1] - A[2][0]*A[0][1]);
            c31 = pow(-1, 3+1)*(A[0][1]*A[1][2] - A[1][1]*A[0][2]);
            c32 = pow(-1, 3+2)*(A[0][0]*A[1][2] - A[1][0]*A[0][2]);
            c33 = pow(-1, 3+3)*(A[0][0]*A[1][1] - A[1][0]*A[0][1]);
            
            AdjA[0][0] = c11; AdjA[0][1] = c21; AdjA[0][2] = c31;
            AdjA[1][0] = c12; AdjA[1][1] = c22; AdjA[1][2] = c32;
            AdjA[2][0] = c13; AdjA[2][1] = c23; AdjA[2][2] = c33;

            if(detA == 0){
                printf("Inverse does not exist. Scalar Matrix. Determinant = 0");
            }
            else{
                for(i=0 ; i<3 ; i++){
                    for(j=0 ; j<3 ; j++){
                        InvA[i][j] = AdjA[i][j] / (float)detA;
                    }
                }
            }

            printf("Inverse of A is: \n");
            for(i=0 ; i<3 ; i++){
                printf("[ ");
                for(j=0 ; j<3 ; j++){
                    printf("%.2f ", InvA[i][j]);
                }
                printf("]\n");
            }

            break;

        default:
            printf("Enter a Valid Character.\n");
    }

    return 0;
}

//[ a00  a01  a02 ]     [ c11  c12  c13 ]
//[ a10  a11  a12 ]     [ c21  c22  c23 ]
//[ a20  a21  a22 ]     [ c31  c32  c33 ]