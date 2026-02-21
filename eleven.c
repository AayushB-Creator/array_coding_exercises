/*
wap to i/p the elements of a 2D array
then from this array, make two arrays -
one that stores all odd elements of the 2D array
and another one that stores all even elements of the 2D array
*/
#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Input the elements of the matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //making the 2 arrays
    int even[9];//maximum 9 even elements can be there for 3x3 matrix
    int odd[9];//max 9 odd elements can be there for 3x3 matrix
    int evencount=0,oddcount=0;
    /*
    evencount an ddcount will count the no. of even & odd elements in the respective arrays as they get stored
    and will help in later printing those arrays elements
    as let say even[9] has some 5 even elements stored and rest is garbage values by default
    then we can track these 5 by evencount an then during printing
    we can loop upto 5 only (i.e 5 times) and print those 5 even elements only stored in the even[] array!
    */

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2==0){
                even[evencount]=arr[i][j];
                evencount++;
            }else{
                odd[oddcount]=arr[i][j];
                oddcount++;
            }
        }
    }
    printf("Array of evens is :");
    for(int i=0;i<evencount;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("Array of odds is : ");
    for(int i=0;i<oddcount;i++){
        printf("%d ",odd[i]);
    }
    printf("\n");


    return 0;
}