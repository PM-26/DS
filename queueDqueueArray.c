// input restricted queue dqueue array
#include<stdio.h>
int arr[10];
int front=-1;
int rear=-1;
int main(){
    int ch=1;
    while(ch){
        int rear;
        printf("INPUT RESTRICTED\n");
        printf("Enter 1 to enqueue.\n");
        printf("Enter 2 to dequeue.\n");
        printf("Enter 3 to view.\n");
        printf("Enter 4 to exit.\n");
        printf("OUTPUT RESTRICTED\n");
        printf("Enter 5 to enqueue.\n");
        printf("Enter 6 to dequeue\n");
        int choice;
        scanf("%d",&choice);

        if (choice==1){
            if (front==-1){
                front=rear=1;
                printf("Enter data:\n");
                scanf("%d",&arr[rear]);
            }
            else{
                printf("Enter data:\n");
                scanf("%d",&arr[++rear]);
            }
        }
        else if (choice==2){
            printf("1. Dequeue from front.\n");
            printf("2. Dequeue from rear.\n");
            int choice2;
            scanf("%d",&choice2);

            if (choice2==1){
                if (front==-1){
                    printf("Queue is empty.\n");
                }
                else if (front==rear){
                    front=rear=-1;
                    printf("Dequeued succesfully.\n");
                }
                else{
                    front++;
                    printf("Dequeued succesfully.\n");
                }
            }
            if (choice2==2){
                if (rear==-1){
                    printf("Queue is empty.\n");
                }
                else{
                    rear--;
                    printf("Dequeued succesfully.\n");
                }
            }
        }
        else if (choice==3){
            if (rear==-1 || front==-1){
                printf("Queue is empty.\n");
            }
            else{
                int temp=front;
                while(temp!=rear+1){
                printf("%d\t",arr[temp]);
                temp++;
                }
            printf("\n");
            }
        }
        else if (choice==5){
            printf("Enter 1 to insert at front.\n");
            printf("Enter 2 to insert at rear.\n");
            int choice2;
            scanf("%d",&choice2);

            if (choice2==1){
                if (front==-1){
                    front=0;
                    rear=0;
                    printf("Enter data.\n");
                    scanf("%d",&arr[rear]);
                }
                else if (front==0){
                    printf("Can't insert at front as data is already there.\n");
                }
                else{
                    front--;
                    printf("Enter data.\n");
                    scanf("%d",&arr[front]);
                }
            }
            else{
                if (rear==10-1){
                    printf("Queue is full.\n");
                }
                else if (rear==-1){
                    front=rear=0;
                    printf("Enter data.\n");
                    scanf("%d",&arr[front]);
                }
                else{
                    rear=rear+1;
                    printf("Enter data.\n");
                    scanf("%d",&arr[rear]);
                }
            }
        }
        else if (choice==6){
            front=front+1;
            printf("Dequeued successfully.\n");
        }
        else{
            break;
        }
    }
    return 0;
}