#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

int main(){
    int ch=1;
    struct node *first=NULL,*temp=NULL;
    while(ch){
        printf("Enter 1 to PUSH.\n");
        printf("Enter 2 to POP.\n");
        printf("Enter 3 to TRAVERSE.\n");
        printf("Enter 4 to PEEK\n");
        printf("Enter 5 to exit.\n");
        
        int choice;
        scanf("%d",&choice);

        if (choice==1){
            struct node *ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=first;
            first=ptr;
        }
        else if(choice==2){
            temp=first;
            printf("You deleted %d\n",temp->data);
            first=first->next;
            free(temp);
        }
        else if(choice==3){
            temp=first;
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            printf("\n");
        }
        else if(choice==4){
            printf("The Value at top:%d\n",first->data);
        }
        else if(choice==5){
            break;
        }
    }
return 0;
}