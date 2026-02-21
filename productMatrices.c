/*
To find product of 2 matrices
considering the matrices satisfy the required order
*/
#include <stdio.h>

int main(){
    int A[3][3] = {
    {5, -2, 3},
    {0,  7, 1},
    {-4, 2, 9}
    };

int B[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
    };

    int rowsA = sizeof(A)/sizeof(A[0]);
    int colsA = (sizeof(A)/sizeof(int))/rowsA;
    int rowsB = sizeof(B)/sizeof(B[0]);
    int colsB = (sizeof(B)/sizeof(int))/rowsB;
    
//main logic 
    int resultant[10][10];
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            resultant[i][j]=0;
            for(int k=0; k<rowsB; k++){
                resultant[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
//...

    printf("The resultant matrix is\n");
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            printf("%d ",resultant[i][j]);
        }
        printf("\n");
    }

    return 0;
}
