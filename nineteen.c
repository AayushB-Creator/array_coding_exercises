/*
wap that reads a nxn matrix
waf isLowerTriangular(int a[][],int n) that
returns 1 if matrix is lower triangular
*/
#include <stdio.h>

int isLowerTriangular(int a[][20],int n){
    int lowtr=1;//assume that it is lower triangular by default
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][j]!=0){
                lowtr=0;
                break;
            }
        }
        if(!lowtr) return 0;
    }

    return 1;
}

int main(){
    int mat[20][20];
    int order;
    printf("Input order of matrix : ");
    scanf("%d",&order);

    printf("Enter the elements of %dx%d matrix \n",order,order);
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf(isLowerTriangular(mat,order)?"Lower Triangular!":"Not Lower Triangular!");
    return 0;
}