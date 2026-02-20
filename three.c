/*
wap to interchange the 2nd element with the 2nd-last element
*/
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    int temp=arr[1];
    arr[1]=arr[n-2];
    arr[n-2]=temp;
    
    printf("Array after interchange : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}