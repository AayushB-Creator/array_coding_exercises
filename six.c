/*
wap to read and display a square(using functions)
*/
#include <stdio.h>
void readsq(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void printsq(int arr[][3]){
    printf("the square is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[3][3];
    readsq(arr);
    printsq(arr);
    return 0;
}