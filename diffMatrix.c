#include<stdio.h>
int main(){
    
    int ch=0;

    printf(" ME NU\n");
    printf("1.UPPER triangular\n");
    printf("2.LOWER triangular\n");
    printf("2.DIAGONAL triangular\n");
    scanf("%d",&ch);

    if (ch==1){
        int arr[3][3]={{1,2,3},{0,4,5},{0,0,6}};
        for (int i=0;i<3;i++){
            printf("\n");
            for (int j=0;j<3;j++){
                printf("%d \t",arr[i][j]);
            }
        }
    }
    else if(ch==2){
        int arr[3][3]={{1,0,0},{2,3,0},{4,5,6}};
        for (int i=0;i<3;i++){
            printf("\n");
            for (int j=0;j<3;j++){
                printf("%d \t",arr[i][j]);
            }
        }
    }
    else{
        int arr[3][3]={{1,0,0},{0,2,0},{0,0,3}};
        for (int i=0;i<3;i++){
            printf("\n");
            for (int j=0;j<3;j++){
                printf("%d \t",arr[i][j]);
            }
        }
    }

return 0;
}