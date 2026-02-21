/*
wap to read a matrix
and display the sum of all diagonal elements
*/
#include <stdio.h>

int sumofdiag(int mat[][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || i+j==2) sum+=mat[i][j];
        }
    }
    return sum;
}

void readmat(int mat[][3]){
    printf("Enter the elements of %dx%d matrix \n",3,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

int main(){
    int matrix[3][3];
    readmat(matrix);
    printf("Sum of all diag elems of %s = %d\n","matrix",sumofdiag(matrix));
    return 0;
}