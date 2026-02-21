/*
wap to enter a number
and break it into n number of digits
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int ncopy=n;

    int digits[100];

    int digitcount=0;
    while(ncopy>0){
        ncopy/=10;
        digitcount++;
    }
    //for ex: n=5643 -> digitcount = 4
    for(int i=digitcount-1;i>=0;i--){ //i=3,i=2,i=1,i=0 -> 4 times for n=5643
        digits[i]=n%10;
        n/=10;
    }

    printf("The number is broken as : ");
    for(int i=0;i<digitcount;i++){
        printf("%d ",digits[i]);
    }

    return 0;
}