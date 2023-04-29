#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter no. of rows.\n");
    scanf("%d",&rows);
    printf("Enter no. of cols.\n");
    scanf("%d",&cols);

    int arr[rows][cols];

    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("Enter value for %d %d\t",i,j);
            scanf("%d",&arr[i][j]);
        }
               }
               printf("Tuple Representation.\n");
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                if (arr[i][j]!=0){
                    printf("%d %d %d\n",i,j,arr[i][j]);
                    }
                    }
                    }
return 0;
}