#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
        struct node *first=NULL,*temp=NULL;
    while(1){
        int ch1;
        printf("Enter 1 to create a singular circular linked list.\nEnter 2 to view singular circular linked list.\nEnter 3 to insert at begining.\nEnter 4 to insert at position.\n");
        scanf("%d",&ch1);
        
        if (ch1==1){
            int ch2=1;
            while(ch2){
                struct node *ptr=(struct node*)malloc(sizeof(struct node));
                printf("Enter data:\n");
                scanf("%d",&ptr->data);
                ptr->next=first;

                if(first==NULL){
                    first=ptr;
                    temp=ptr;
                    temp->next=first;
                }
                else{
                    temp->next=ptr;
                    temp=ptr;
                    temp->next=first;
                }
            printf("Enter more?(1,0)\n");
            scanf("%d",&ch2);
            }
        }
        else if(ch1==3){
            //insertion at begining
            struct node *temp;
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=first;
            
            
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=ptr;
            first=ptr;
        }
        else if(ch1==2){
            temp=first;
            printf("The linked list:\n");
            do{
                printf("%d\t",temp->data);
                temp=temp->next;
            }while(temp!=first);
            printf("\n");
        }
        else if(ch1==4){
            struct 
        }
    }
return 0;
}