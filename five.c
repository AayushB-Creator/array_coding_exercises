/*
wap to compute the sum and mean of the elements of a 2D array
*/
#include <stdio.h>
int main(){
    int arr[10][5] = {
    {12, 25, 18, 30, 22},
    {45, 28, 33, 19, 40},
    {17, 21, 36, 14, 29},
    {50, 42, 31, 27, 39},
    {16, 24, 35, 41, 20},
    {38, 11, 26, 47, 32},
    {23, 37, 44, 15, 28},
    {19, 34, 48, 12, 43},
    {27, 46, 21, 38, 17},
    {31, 20, 39, 25, 36}
    };
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            sum+=arr[i][j];
        }
    }
    printf("The sum is %d and mean is %f\n",sum, (float)sum/50);

    return 0;
}