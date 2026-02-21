/*
wap that reads a matrix 
and displays the sum of the elements above the main diagonal
*/
#include <stdio.h>

int main(){
    int mat[5][5];
    printf("Enter the elements of 5x5 matrix \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(i<j) sum+=mat[i][j];
        }
    }
    printf("The sum of elems above main diagonal is : %d",sum);

    return 0;
}