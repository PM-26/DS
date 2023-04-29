#include<stdio.h>
int main(){

    int rows,cols,ch;
    printf("Enter rows.\n");
    scanf("%d",&rows);
    printf("Enter cols.\n");
    scanf("%d",&cols);

    int arr1[rows][cols];
    int arr2[rows][cols];
    int arr3[rows][cols];
    int arr4[rows][cols];
    int arr5[rows][cols];

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("Enter value for Matrix 1 (%d %d) \t",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("Enter value for Matrix 2(%d %d)\t",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf(" M E N U \n");
    printf("1. for matrixMultiplication.\n");
    printf("2. for matrixTranspose.\n");
    printf("3. for matrixAddition.\n");
    scanf("%d",&ch);

    if (ch==1){
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                arr3[i][j]=0;
                for (int k=0;k<cols;k++){
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for (int i=0;i<rows;i++){
            printf("\n");
            for (int j=0;j<cols;j++){
                printf("%d \t",arr3[i][j]);
            }
        }
    }
    //transposing arr1
    else if (ch==2){
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                arr4[j][i]=arr1[i][j];
            }
        }
        //printing of arr4(transposed arr1)
        printf("Transposed Matrix 1\n");
        for (int i=0;i<rows;i++){
            printf("\n");
            for (int j=0;j<cols;j++){
                printf("%d \t",arr4[i][j]);
            }
        }
    }
    else{
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                arr5[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        //printing of arr5
        printf("Addition of  Matrix 1 and 2.\n");
        for (int i=0;i<rows;i++){
            printf("\n");
            for (int j=0;j<cols;j++){
                printf("%d \t",arr5[i][j]);
            }
        }
    }

return 0;
}