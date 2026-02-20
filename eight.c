/*
wap to add 2 3x3 matrix using pointers
*/
#include <stdio.h>

void sum2mat(int (*mat1)[3],int (*mat2)[3],int (*resmat)[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(resmat+i)+j) = (*(*(mat1+i)+j)) + (*(*(mat2+i)+j));
        }
    }
}

int main(){
    int matone[3][3]={{1,2,3},{4,5,6},{7,8,9}},mattwo[3][3]={{1,2,3},{4,5,6},{7,8,9}},resmat[3][3];
    sum2mat(matone,mattwo,resmat);
    printf("The resultant matrix is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",resmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}