#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=NULL;
int main(){
    while(1){
        int ch;
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n");
        printf("4.VIEW\n");
        scanf("%d",&ch);
        if (ch==1){
            struct node*ptr=(struct node*)malloc(sizeof(struct node));
            printf("Enter data:\n");
            scanf("%d",&ptr->data);
            ptr->next=top;
            top=ptr;
        }
        else if(ch==2){
            struct node*temp;
            temp=top;
            if (top==NULL){
                printf("Stack is empty.\n");
            }
            else{
                printf("Popped element is %d.\n",top->data);
                top=top->next;
                free(temp);
            }
        }
        else if(ch==3){
            if(top==NULL){
                printf("Stack is empty.\n");
            }
            else{
            printf("The value at top:%d\n",top->data);
            }
        }
        else if(ch==4){
            struct node*temp;
            temp=top;
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            printf("\n");
        }
        else if(ch==5){
            break;
        }
    }
}