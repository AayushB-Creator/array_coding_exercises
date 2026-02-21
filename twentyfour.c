/*
wap to delete duplicate entries from an array
of n integers
*/
#include <stdio.h>

void deleteN(int arr[],int pos,int *n){
    for(int i=pos;i<*n;i++){
        arr[i]=arr[i+1];
    }
    *n = *n - 1;
}

int main(){
    int arr[] = {
    0, 0,                      // duplicate zeros at start
    -1, -1,                    // duplicate negatives consecutive
    5, 12, 7, 5,               // non-consecutive duplicate (5)
    2147483647,                // max int
    -2147483648,               // min int
    12, 9, 0, 7,               // more non-consecutive duplicates
    18, -3, 12,                // repeated 12 multiple times
    -3,                        // duplicate negative non-consecutive
    25, 18, 30, 25,           // duplicates scattered
    42, 9, 42,                // duplicates again
    100, -50, 100,            // large positive duplicate
    30, 60, -50,              // negative duplicate far apart
    99, 99, 99,               // multiple same consecutive
    1, 2, 3, 4, 5,            // some unique and one duplicate (5 again)
    -2147483648,              // repeated extreme min int
    2147483647,               // repeated extreme max int
    0                         // duplicate zero at end
    };
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        //checking & removing for each elem
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                deleteN(arr,j,&n);
                j--; // agar 2+ duplicates saath hue toh usko cater krne ke liye
            }
        }
    }
    
    //printing the array 
    //it has only unique elems at this place
    printf("The array with all duplicates removed is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}