/*
wap to calculate XA + YB
where A,B -> matrices
X=2,Y=3
*/
#include <stdio.h>

    int main(){
    int A[5][5] = {
    {0,   -2,   5,    100000,   -300},
    {7,    0,  -1,   -500000,    800},
    {3,    9,   0,        42,    -75},
    {-10,  4,  -6,         0,     90},
    {12,  -8,  15,       -20,      1}
    };

    int B[5][5] = {
    {4,     0,   -6,     700000,  -900},
    {0,     8,    2,    -100000,   600},
    {-3,    0,    7,        -55,    40},
    {11,  -13,    0,        500,   -22},
    {-9,    6,  -12,         18,     0}
    };

    int X=2,Y=3;

    int sum[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum[i][j] = (X*A[i][j]) + (Y*B[i][j]);
        }
    }

    printf("The resultant matrix is \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
