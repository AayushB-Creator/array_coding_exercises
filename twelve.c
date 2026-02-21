/*
wap to read 2 floating point number arrays
merge the 2 arrays and display the resultant in reverse order
*/
#include <stdio.h>

int main(){
    float arr1[6];float arr2[6];
    int n1,n2;
    printf("Enter the no. of elements for arr1 (0-6) : ");
    scanf("%d",&n1);
    printf("Enter the no. of elements for arr2 (0-6) : ");
    scanf("%d",&n2);

    printf("Enter elements of arr1 : ");
    for(int i=0;i<n1;i++){
        scanf("%f",&arr1[i]);
    }
    printf("Enter elements of arr2 : ");
    for(int i=0;i<n2;i++){
        scanf("%f",&arr2[i]);
    }

    int k=0;
    float mergedarr[12];
    for(int i=0;i<n1;i++){
        mergedarr[k]=arr1[i];
        k++;
    }
    for(int j=0;j<n2;j++){
        mergedarr[k]=arr2[j];
        k++;
    }
    printf("The merged arrays is (reversed order) : ");
    for(int i=k-1;i>=0;i--){
        printf("%.2f ",mergedarr[i]);
    }

    return 0;
}