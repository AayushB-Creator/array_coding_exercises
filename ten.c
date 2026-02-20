/*
wap to count the total 
no. of non-zero elements 
in a 2D array
*/
#include <stdio.h>

int main(){
    int arr[6][6] = {
    {0, 12, 0, 5, 7, 0},
    {3, 0, 0, 9, 0, 14},
    {0, 0, 8, 0, 6, 0},
    {11, 0, 4, 0, 0, 2},
    {0, 15, 0, 10, 0, 0},
    {13, 0, 16, 0, 1, 0}
    };
    int count = 0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr[i][j]!=0) count++;
        }
    }
    printf("No. of total non-zero elems are : %d\n",count);
    return 0;
}