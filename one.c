/*
consider an array marks[20][5] which stores the marks obtained by
20 students in 5 subjects
then wap to -
a. find the average marks obtained in each subject
b. find the average marks obtained by every student
c. find the number of students who have scored below 50 in their average
d. display the scores obtained by every student
*/
#include <stdio.h>
int main(){
    int marks[20][5] = {
    {78, 85, 90, 66, 72},
    {45, 50, 55, 60, 65},
    {88, 92, 84, 79, 91},
    {35, 40, 38, 42, 37},
    {67, 73, 70, 68, 75},
    {90, 95, 93, 89, 94},
    {52, 58, 60, 55, 57},
    {49, 45, 50, 48, 46},
    {81, 77, 85, 80, 79},
    {62, 64, 61, 63, 65},
    {30, 35, 28, 32, 31},
    {74, 78, 72, 76, 75},
    {59, 54, 58, 57, 56},
    {91, 89, 94, 92, 90},
    {47, 49, 46, 48, 45},
    {68, 70, 72, 69, 71},
    {83, 86, 88, 84, 87},
    {55, 52, 50, 53, 51},
    {39, 42, 41, 40, 38},
    {77, 79, 76, 78, 80}
    };

    // a. find the average marks obtained in each subject
    printf("----------part a-------------\n");
    for(int i=0;i<5;i++){
        int avgsum=0;
        for(int j=0;j<20;j++){
            avgsum+=marks[j][i];
        }
        printf("The average for sub%d is %d\n",i+1,avgsum/20);
    }
    
    // b. find the average marks obtained by every student
    printf("----------part b--------------\n");
    for(int i=0;i<20;i++){
        int avgmsum=0;
        for(int j=0;j<5;j++){
            avgmsum+=marks[i][j];
        }
        printf("The average for stud%d is %d\n",i+1,avgmsum/5);
    }

    // c. find the number of students who have scored below 50 in their average
    printf("----------part c--------------\n");
    int numofstud=0;
    for(int i=0;i<20;i++){
        int avgmsum=0;
        for(int j=0;j<5;j++){
            avgmsum+=marks[i][j];
        }
        if((avgmsum/5)<50) numofstud++;
    }
    printf("%d students scored below 50 in average!\n",numofstud);

    // d. display the scores obtained by every student
    printf("----------part d--------------");
    for(int i=0;i<20;i++){
        printf("\nStudent %d marks : ",i+1);
        for(int j=0;j<5;j++){
            printf("%d ",marks[i][j]);
        }
    }

    return 0;
}