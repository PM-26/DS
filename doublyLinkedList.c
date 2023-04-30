#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main(){
    int ch=1;
    struct node *first=NULL,*temp=NULL;
    while(ch){
        //creation 
        struct node *ptr=(struct node*) malloc(sizeof(struct node));
        printf("Enter Data:\n");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;

        if (first==NULL){
            first=ptr;
            temp=ptr;
            
        }
        else{
            temp->next=ptr;
            ptr->prev=temp;

            temp=ptr;
            }
        printf("Add more? (1,0)\n");
        scanf("%d",&ch);
    }
    int choice;
    printf("Enter 1 to view the linked list.\n");
    printf("Enter 2 to insert at beginning\n");
    printf("Enter 3 to insert at position other than first and last.\n");
    printf("Enter 4 to insert at last.\n");
    printf("Enter 5 to delete at begining.\n");
    printf("Enter 6 to delete at position.\n");
    printf("Enter 7 to delete at last.\n");
    scanf("%d",&choice);
    if (choice==1){
        //view
        temp=first;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    else if (choice==2){
        temp=first;
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&ptr->data);
        ptr->prev=NULL;
        ptr->next=NULL;

        ptr->next=temp;
        temp->prev=ptr;
        first=ptr;
    }

    else if (choice==3){
        int pos;
        printf("Enter position at which you want to insert.\n");
        scanf("%d",&pos);
        temp=first;
        int i=1;
        while (i<pos-1){
            temp=temp->next;
            i++;
        }

        struct node *ptr= (struct node *) malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        ptr->prev=temp;
        ptr->next=temp->next;
        temp->next->prev=ptr;
        temp->next=ptr;
    }
    else if(choice==4){
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        temp=first;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        ptr->prev=temp;
        temp->next=ptr;
    }
    //delete at begin.
    else if (choice==5){
        temp=first;
        first=temp->next;
        free(temp);
    }
    //delete at position
    else if(choice==6){
        int pos,i=1;
        printf("Enter postion to delete:\n");
        scanf("%d",&pos);
        temp=first;
        while (i<pos && temp!=NULL){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    else if (choice==7){
        temp=first;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
        //view
        temp=first;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    
    
    return 0;
}