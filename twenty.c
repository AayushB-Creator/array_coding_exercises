/*
wap that reads a nxn matrix
waf isSymmetric(int a[][],int n) that
returns 1 if matrix is symmetric
*/
#include <stdio.h>

int isSymmetric(int a[][20],int n){
    int symm=1;//assume that it is symm by default
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                symm=0;
                break;
            }
        }
        if(!symm) return 0;
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

    printf(isSymmetric(mat,order)?"Symmetric!":"Not Symmetric!");
    return 0;
}