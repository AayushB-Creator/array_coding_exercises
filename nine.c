/*
wap that computes the product of the elements
that are stored on the diagonal above the main diagonal
*/
#include <stdio.h>

int main(){
    
    int mat[4][4] = {
    { 2, 3, 4, 5},
    { 1, 6, 7, 8},
    { 9, 2, 3, 4},
    { 5, 6, 7, 8}
    };
    int rows = sizeof(mat)/sizeof(mat[0]);
    int cols = (sizeof(mat)/sizeof(int))/rows;
    
    int product = 1;

    for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
            product*=mat[i][j]; //if(i<j) condition is redundant as it never happens so checking that is just not worthy
        }
    }

    printf("The required product is : %d",product);

    return 0;
}