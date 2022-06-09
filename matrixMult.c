#include <stdio.h>

void main(){
    int dimm1, dimn1, dimm2, dimn2;
    printf("Enter dimensions of matrix 1, m x n:\n");
    scanf("%d %d", &dimm1, &dimn1);
    int mat1[dimm1][dimn1];
    for (int i = 0; i < dimm1; i++){
        for (int j = 0; j < dimn1; j++){
            printf("Enter values for row %d, column %d of matrix 1:\n", (i + 1), (j+1));
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter dimensions of matrix 2, m x n:\n");
    scanf("%d %d", &dimm2, &dimn2);
    int mat2[dimm2][dimn2];
    for (int i = 0; i < dimm2; i++){
        for (int j = 0; j < dimn2; j++){
            printf("Enter values for row %d, column %d of matrix 2:\n", (i + 1), (j+1));
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix 1 is: \n");
    for (int i = 0; i < dimm1; i++){
        for (int j = 0; j < dimn1; j++){
            printf("%4d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 is: \n");
    for (int i = 0; i < dimm2; i++){
        for (int j = 0; j < dimn2; j++){
            printf("%4d ", mat2[i][j]);
        }
        printf("\n");
    }

    int result[dimm1][dimn2];
    for (int i = 0; i < dimm1; i++){
        for (int j = 0; j < dimn2; j++){
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < dimm1; i++){
        for (int j = 0; j < dimn2; j++){
            for (int k = 0; k < dimn1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Result Matrix is:\n");
    for (int i = 0; i < dimm1; i++){
        for (int j = 0; j < dimn2; j++){
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }
}