/*
wap that reads a nxn matrix
waf isUpperTriangular(int a[][],int n) that
returns 1 if matrix is upper triangular
*/
#include <stdio.h>

int isUpperTriangular(int a[][20],int n){
    int uptr=1;//assume that it is upper triangular by default
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i][j]!=0){
                uptr=0;
                break;
            }
        }
        if(!uptr) return 0;
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

    printf(isUpperTriangular(mat,order)?"Upper Triangular!":"Not Upper Triangular!");
    return 0;
}