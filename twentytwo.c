/*
WAP to illustrate the use of pointer that points to a 2D array
*/
#include <stdio.h>

int main()
{
    // Step 1: Declare and initialize 2D array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Step 2: Declare pointer to 2D array
    int (*ptr)[3];

    // Step 3: Assign pointer to 2D array
    ptr = arr;

    printf("Accessing elements using ptr[i][j]:\n");

    // Step 4: Access using ptr[i][j]
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    printf("\nAccessing elements using pointer arithmetic *(*(ptr+i)+j):\n");

    // Step 5: Access using pointer arithmetic
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    printf("\nDisplaying addresses of elements using pointer:\n");

    // Step 6: Display addresses to illustrate pointer behavior
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%p ", (*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}