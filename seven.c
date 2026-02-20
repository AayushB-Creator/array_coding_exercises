/*
wap that alulates the sum of the elements
that are stored on the main diagonal
of a matrix using pointers
*/
#include <stdio.h>
int trace(int (*arr)[3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j) sum+=(*(*(arr+i)+j));
        }
    }
    return sum;
}
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("Tr(A) = %d\n",trace(matrix));
    return 0;
}