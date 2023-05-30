#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
int main(){
    struct node *first=NULL, *temp=NULL;
    while(1){
        //doublyCircular
        int ch;
        printf("Enter 1 to create the list.\n");
        printf("Enter 2 to view.\n");
        printf("Enter 3 to insert at beginning.\n");
        printf("Enter 4 to insert at position.\n");
        printf("Enter 5 to insert at last.\n");
        printf("Enter 6 to delete first.\n");
        printf("Enter 7 to delete at position.\n");
        printf("Enter 8 to delete at last.\n");
        scanf("%d",&ch);

        if (ch==1){
            int choice=1;
            do{
                struct node *ptr=(struct node*)malloc(sizeof(struct node));
                printf("Enter data:\n");
                scanf("%d",&ptr->data);
                ptr->next=NULL;
                ptr->prev=NULL;

                if(first==NULL){
                    first=ptr;
                    temp=ptr;
                    temp->next=first;
                }
                else{
                    temp->next=ptr;
                    ptr->prev=temp;
                    ptr->next=first;
                    first->prev = ptr;
                    temp=ptr;
                }
                printf("Enter more?\n");
                scanf("%d",&choice);
            }
            while(choice);
        }
        else if (ch==2){
            //view linked list
            temp=first;
            do{
                printf("%d \t",temp->data);
                temp=temp->next;
            }
            while(temp!=first);
            printf("\n");
        }
        else if (ch==3){
            //insert at begining
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=NULL;
            ptr->prev=NULL;

            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=first;
            first=ptr;
        }
        else if(ch==4){
            //insert at position
            int pos;
            printf("Enter position at which you want to insert:\n");
            scanf("%d",&pos);
            int i=1;
            temp=first;
            while(i<pos-1){
                temp=temp->next;
                i++;
            }
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=temp->next;
            ptr->prev=temp;
            temp->next->prev=ptr;
            temp->next=ptr;
        }
        else if(ch==5){
            //insert at last
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=first;
        }
        else if (ch==6){
            //delete first
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=first->next;
            temp=first;
            first=first->next;
            free(temp);
        }
        else if(ch==7){
            struct node *prev=(struct node*)malloc(sizeof(struct node));
            //delete at position
            int pos;
            printf("Enter position:\n");
            scanf("%d",&pos);
            int i=1;
            temp=first;
            while(i<pos){
                prev=temp;
                temp=temp->next;
                i++;
            }
            prev->next=temp->next;
            temp->next->prev=prev;
            free(temp);
        }
        else if(ch==8){
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->prev->next=first;
            free(temp);
            printf("Successfully deleted.\n");
        }
    }

}
