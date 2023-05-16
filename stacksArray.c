#include<stdio.h>
#include<stdlib.h>
int arr[10];
int top=-1;

int main(){
    int ch=1;
    while(ch){
        int choice;
        printf("Enter 1 to PUSH an element.\n");
        printf("Enter 2 to POP an element.\n");
        printf("Enter 3 to PEEK an element.\n");
        printf("Enter 4 to TRAVERSE the stack.\n");
        printf("Enter 5 to EXIT.\n");
        scanf("%d",&choice);

        if (choice==1){
            if (top==10-1){
                printf("Overflow.\n");
            }
            else{
                top=top+1;
                printf("Enter element\n");
                scanf("%d",&arr[top]);
            }
        }
        else if(choice==2){
            if(top==-1){
                printf("Stack is empty.\n");
            }
            else{
                printf("Element deleted is : %d .\n",arr[top]);
                top=top-1;
            }
        }
        else if (choice==3){
            if (top==-1){
                printf("Stack is empty.\n");
            }
            printf("Element at top is %d .\n",arr[top]);
        }
        else if(choice==4){
            for (int i=top;i>=0;i--){
                printf("%d\t",arr[i]);
            }
            printf("\n");
        }  
        else if(choice==5){
            printf("Bye!\n");
            break;
        }  
        else{
            printf("Invalid option.\n");
        }  
    }
}