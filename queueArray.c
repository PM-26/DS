#include<stdio.h>
int arr[10];
int front=-1;
int rear=-1;

int main(){
    int ch;
    while(ch){
        printf("Enter 1 to enqueue.\n");
        printf("Enter 2 dequeue.\n");
        printf("Enter 3 to view.\n");
        printf("Enter 4 to exit.\n");
        int choice;
        scanf("%d",&choice);
        if (choice==1){
            printf("Enter value:\n");
                int val;
                scanf("%d",&val);
            if (rear==10-1){
                printf("Queue is full.\n");
            }
            else if(front==-1 && rear==-1){
                front=rear=0;
                arr[rear]=val;
            }
            else{
                rear=rear+1;
                arr[rear]=val;
            }
        }
        else if (choice==2){
            if (front==-1 && rear==-1){
                printf("Queue is empty.\n");
            }
            else if(front==rear){
                printf("Dequeued element is %d.\n",arr[front]);
                front=rear=-1;
            }
            else{
                printf("Dequeued element is %d.\n",arr[front]);
                front++;  
            }
        }
        else if(choice==3){
            if (front==rear==-1){
                printf("Queue is empty.\n");
            }
            else{
                int temp=front;
                while(temp!=rear+1){
                    printf("%d\t",arr[temp]);
                    temp=temp+1;
                }
                printf("\n");
            }
        }
        else if(choice==4){
            break;
        }
    }
return 0;
}