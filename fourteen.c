/*
write a menu driven program
to read and display a pxqxr matrix
also, find the sum, transpose, & product of two pxqxr matrices
*/
#include <stdio.h>

void readNdisplay(){
    int p,q,r;
    printf("Enter p :");
    scanf("%d",&p);
    printf("Enter q :");
    scanf("%d",&q);
    printf("Enter r :");
    scanf("%d",&r);

    int mat[10][10][10];
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat[i][j][k]);
            }
        }
    }

    printf("The 3D matrix is\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                printf("%d ",mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sum3D(){//sum of 2 pxqxr matrix

    int p,q,r;
    printf("Enter p :");
    scanf("%d",&p);
    printf("Enter q :");
    scanf("%d",&q);
    printf("Enter r :");
    scanf("%d",&r);

    int mat1[10][10][10];
    int mat2[10][10][10];
    printf("Enter the elements of the matrix 1\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat1[i][j][k]);
            }
        }
    }
    printf("Enter the elements of the matrix 2\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat2[i][j][k]);
            }
        }
    }

    int sumMat3D[10][10][10];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                sumMat3D[i][j][k] = mat1[i][j][k] + mat2[i][j][k];
            }
        }
    }

    printf("The resultant(SUM) 3D matrix is\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                printf("%d ",sumMat3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void transpose3D(){//transpose of a pxqxr matrix
    int p,q,r;
    printf("Enter p :");
    scanf("%d",&p);
    printf("Enter q :");
    scanf("%d",&q);
    printf("Enter r :");
    scanf("%d",&r);

    int mat[10][10][10];
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat[i][j][k]);
            }
        }
    }

    int transpose[10][10][10];
    for(int i=0;i<p;i++){//main layer index as it is
        for(int j=0;j<r;j++){//andar wale indices palat denge
            for(int k=0;k<q;k++){//kyunki traspose ho raha hai
                transpose[i][j][k] = mat[i][k][j];
            }
        }
    }

    printf("The resultant(TRANSPOSE) 3D matrix is\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<q;k++){
                printf("%d ",transpose[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

void product3D(){//product of 2 pxqxr matrix

    int p,q,r;
    printf("Enter p :");
    scanf("%d",&p);
    printf("Enter q :");
    scanf("%d",&q);
    printf("Enter r :");
    scanf("%d",&r);

    int mat1[10][10][10];
    int mat2[10][10][10];
    printf("Enter the elements of the matrix 1\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat1[i][j][k]);
            }
        }
    }
    printf("Enter the elements of the matrix 2\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                scanf("%d",&mat2[i][j][k]);
            }
        }
    }

    int product[10][10][10];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                product[i][j][k]=0;
                for(int x=0; x<r;x++){
                    product[i][j][k] += mat1[i][j][x] * mat2[i][x][k];
                }
            }
        }
    }

    printf("The resultant(PRODUCT) 3D matrix is\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<r;k++){
                printf("%d ",product[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

int main(){
    printf("\nWelcome to our software!\n");
    printf("You can test out various activities on 3D matrices.\n");
    printf("Possible activities are -\n");
    printf("a. Read & Display a 3D matrix\n");
    printf("b. Find the sum of two 3D matrices\n");
    printf("c. Find the transpose of a 3D matrix\n");
    printf("d. Find the product of two 3D matrices\n");
    char contchoice;
    char choice;
    do{
        printf("Kindy enter your choice (a/b/c/d) : ");
        scanf(" %c",&choice);

        switch(choice){
            case 'a': readNdisplay();
            break;
            
            case 'b': sum3D();
            break;

            case 'c': transpose3D();
            break;

            case 'd': product3D();
            break;

            default: printf("\nEnter only a/b/c/d for now.\n");
            printf("Other functionalities are being made.\n");
            printf("Thank you for your patience!!\n\n");

        }
        
        printf("Wanna continue? (y/n) : ");
        scanf(" %c",&contchoice);
        
    }while(contchoice=='y'||contchoice=='Y');
    printf("\nThank you for using our software!");
    printf("\nDo let us know your feedback.\n\n");


    return 0;
}