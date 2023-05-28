#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node *front=NULL;
struct node *rear=NULL;
int main(){
    struct node *front=NULL,*rear=NULL,*temp=NULL;
    int ch=1;
    while(ch){
        printf("Input restricted.\n");
        printf("Enter 1 to enqueue.\n");
        printf("Enter 2 to dequeue.\n");
        printf("Output restricted.\n");
        printf("Enter 3 to enqueue.\n");
        printf("Enter 4 to dequeue.\n");
        printf("Enter 5 to view.\n");
        printf("Enter 6 to exit.\n");
        int choice;
        scanf("%d",&choice);
        
        if(choice==1){
            struct node*ptr=(struct node*)(malloc)(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=NULL;

            if (front==NULL){
                front=ptr;
                rear=ptr;
            }
            else{
                rear->next=ptr;
                rear=ptr;
            }
        }
        else if (choice==2){
            int choice2;
            printf("Enter 1 to dequeue from front.\n");
            printf("Enter 2 to dequeue from rear.\n");
            scanf("%d",&choice2);
            if (choice2==1){
                if(front==NULL){
                    printf("Queue is empty.\n");
                }
                else{
                    temp=front;
                    front=front->next;
                    free(temp);
                    printf("Dequeued successfully.\n");
                }
            }
            else{
                temp=front;
                while(temp->next!=rear){
                    temp=temp->next;
                }
                free(rear);
                rear=temp;
                rear->next=NULL;
                printf("Dequeued successfully.\n");
            }
        }
        else if(choice==3){
            int choice2;
            printf("Enter 1 to insert at front.\n");
            printf("Enter 2 to insert at rear.\n");
            scanf("%d",&choice2);
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            if (choice2==1){
                if (front==NULL){
                    front=rear=ptr;
                }
                else{
                    ptr->next=front;
                    front=ptr;
                }
            }
            else{
                rear->next=ptr;
                rear=ptr;
            }
        }
        else if(choice==4){
            if (front==NULL){
                printf("Queue is empty.\n");
            }
            else{
                temp=front;
                front=front->next;
                free(temp);
                printf("Successfull dequeued.\n");
            }         
        }
        else if(choice==5){
            if (front==NULL){
                printf("Queue is empty.\n");
            }
            else{
                temp=front;
                while(temp!=NULL){
                    printf("%d\t",temp->data);
                    temp=temp->next;
                }
                printf("\n");
            }
        }
        else{
            break;
        }
    }
    return 0;
}