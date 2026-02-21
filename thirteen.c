/*
wap using pointers to interchange
the second biggest and second smallest number
in the array
*/
#include <stdio.h>
#include <limits.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int SecLargestIndex(int arr[],int n){
    int largest = INT_MIN;
    int secondL = largest;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondL=largest;
            largest=arr[i];
        } else if(arr[i]<largest && arr[i]>secondL) secondL=arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==secondL) return i;
    }
    return -1;
}

int SecSmallestIndex(int arr[],int n){
    int smallest = INT_MAX;
    int secondS =  smallest;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondS=smallest;
            smallest=arr[i];
        } else if(arr[i]>smallest && arr[i]<secondS) secondS=arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==secondS) return i;
    }
    return -1;
}

int main(){
    int arr[] = {
    0,                 // zero
    -10,               // negative number
    25,                // normal positive
    7,                 // small positive
    -50,               // large negative
    100,               // large positive
    3,                 // small positive
    99,                // second largest candidate
    -49,               // second smallest candidate
    2147483647,       // INT_MAX (largest possible int)
    -2147483648,      // INT_MIN (smallest possible int)
    50,                // medium positive
    -1,                // small negative
    2147483646,       // second largest actual value
    -2147483647,      // second smallest actual value
    42,                // random positive
    42,                // duplicate value
    -10                // duplicate negative
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    int secLarIdx = SecLargestIndex(arr,n);
    int secSmallIdx = SecSmallestIndex(arr,n);

    if(secLarIdx != -1 && secSmallIdx != -1) (&arr[secLarIdx],&arr[secSmallIdx]);

    printf("The array after interchanging the required is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}