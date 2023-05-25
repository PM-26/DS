// simple queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *front=NULL,*rear=NULL;
    int ch=1;
    while(ch){
        printf("Enter 1 to enqueue.\n");
        printf("Enter 2 to dequeue.\n");
        printf("Enter 3 to traverse.\n");
        printf("Enter 4 to exit.\n");
        int choice;
        scanf("%d",&choice);
        if (choice==1){
            struct node*ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data.\n");
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
            if(front==NULL){
                printf("Queue is empty.\n");
            }
            else{
                struct node *temp;
                temp=front;
                front=front->next;
                free(temp);
                printf("Element dequeued succesfully.\n");
            }
        }
        else if (choice==3){
            struct node*temp=front;
            if (front==NULL){
                printf("Queue is empty.\n");
            }
            else{
                while (temp!=NULL){
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