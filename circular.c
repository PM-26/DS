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
        printf("Enter 1 to create a singular circular linked list.\nEnter 2 to view singular circular linked list.\nEnter 3 to insert at begining.\nEnter 4 to insert at position.\nEnter 5 to insert at last.\nEnter 6 to delete first.\nEnter 7 to delete at position.\nEnter 8 to delete at last.\n");
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
        else if(ch1==2){
            temp=first;
            printf("The linked list:\n");
            do{
                printf("%d\t",temp->data);
                temp=temp->next;
            }while(temp!=first);
            printf("\n");
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
        else if(ch1==4){
            //insert at position
            int pos;
            printf("Enter position at which you want to insert:\n");
            scanf("%d",&pos);
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);

            int i=1;
            temp=first;

            while(i<pos-1){
                temp=temp->next;
                i++;
            }
            ptr->next=temp->next;
            temp->next=ptr;
        }
        else if(ch1==5){
            //insert at last
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            ptr->next=first;
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=ptr;
        }
        else if (ch1==6){
            //delete at last
            temp=first;
            while(temp->next!=first){
                temp=temp->next;
            }
            temp->next=first->next;
            temp=first;
            first=first->next;
            free(temp);
        }
        else if(ch1==7){
            struct node *prev=NULL;
            int pos;
            printf("Enter position to delete:\n");
            scanf("%d",&pos);
            int i=1;
            temp=first;
            while(i<pos){
                prev=temp;
                temp=temp->next;
                i++;
            }
            prev->next=temp->next;
            free(temp);
        }
        else if(ch1==8){
            struct node *prev=NULL;
            temp=first;
            while(temp->next!=first){
                prev=temp;
                temp=temp->next;
            }
            prev->next=first;
            free(temp);
        }
    }
return 0;
}