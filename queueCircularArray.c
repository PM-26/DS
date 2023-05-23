//circularQueueArray
#include<stdio.h>
int arr[10];
int front=-1;
int rear=-1;
int main(){
    int ch=1;
    while(ch){
        printf("1. enQueue.\n");
        printf("2. deQueue.\n");
        printf("3. View.\n");
        printf("4. Exit.\n");
        int choice;
        scanf("%d",&choice);
        if (choice==1){
            if (front==rear+1 || front==0 && rear==10-1){
                printf("Queue is FULL.\n");
            }
            else if (front==-1 && rear==-1){
                front=rear=0;
                printf("Enter data:\n");
                scanf("%d",&arr[rear]);
            }
            else if(rear==10-1){
                rear=0;
                printf("Enter data:\n");
                scanf("%d",&arr[rear]);
            }
            else{
                rear=rear+1;
                printf("Enter data:\n");
                scanf("%d",&arr[rear]);
            }
        }
        else if (choice==2){
            if (front==-1){
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
            int temp=front;
            while(temp!=rear+1){
                printf("%d \t",arr[temp]);
                temp=temp+1;
            }
            printf("\n");
        }
        else{
            break;
        }
    }
    return 0;
}