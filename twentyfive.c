/*
wap that reads a floating point array
update the array to insert a new number at the specified location
*/
#include <stdio.h>

int main(){
    float arr[20];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Input the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }

    float num;
    printf("Enter the number to insert : ");
    scanf("%f",&num);

    int pos;
    printf("Enter the position at which to be inserted : ");
    scanf("%d",&pos);

    int i=n;
    while(i>pos-1){
        arr[i]=arr[i-1];
        i--;
    }
    arr[pos-1]=num;
    n+=1;

    printf("The array after insertion is : ");
    for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }
    // also add those array overflow and n>=1 conditions if ques asks
    return 0;
}