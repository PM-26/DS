// queue circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
int main(){
    int ch=1;
    struct node *front=NULL;
    struct node *rear=NULL;
    struct node *temp;
    while(ch){
        printf("Enter 1 to enqueue.\n");
        printf("Enter 2 to dequeue.\n");
        printf("Enter 3 to view.\n");
        printf("Enter 4 to exit.\n");
        int choice;
        scanf("%d",&choice);

        if (choice==1){
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data.\n");
            scanf("%d",&ptr->data);

            if(front==NULL){
                front=ptr;
                rear=ptr;
                rear->next=ptr;
            }
            else{
                rear->next=ptr;
                rear=ptr;
                rear->next=front;
            }
        }
        else if (choice==2){
            if (front==NULL){
                printf("Queue is empty.\n\n");
            }
            else if(front==rear){
                front=rear=NULL;
                printf("Element dequeued successfully.\n");
            }
            else{
                temp=front;
                front=front->next;
                free(temp);
                rear->next=front;
                printf("Dequeued successfully.\n");
            }
        }
        else if (choice==3){
            if (front==NULL){
                printf("Queue is empty.\n\n");
            }
            else{
                struct node *temp=front;
                do{
                    printf("%d\t",temp->data);
                    temp=temp->next;
                }
                while(temp!=front);
                printf("\n");
            }
        }
        else{
            break;
        }
    }
    return 0;
}