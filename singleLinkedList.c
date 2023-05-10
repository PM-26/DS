#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
int main(){
    //creation
    int ch;
    struct node *first=NULL, *last=NULL,*temp=NULL;
    while(ch){ 
        struct node* ptr=(struct node*) malloc(sizeof (struct node));
        printf("Enter data: \n");
        scanf("%d",&ptr->data);
        ptr->next=NULL;

        if (first==NULL){
            first=ptr;
            last=ptr;
        }
        else{
            last->next=ptr;
            last=ptr;
        }
        printf("Enter again?(1/0)\n");
        scanf("%d",&ch);
        }

//view
printf("Linked List before deletion.\n");
last=first;
while (last!=NULL){
    printf("%d\t",last->data);
    last=last->next;
}
printf("\n");

// //delete first element
// last=first;
// first=first->next;
// free(last);
// printf("\n");

// //view
// printf("Linked List after deleting first element\n");
// last=first;
// while(last!=NULL){
//     printf("%d\t",last->data);
//     last=last->next;
//     }

//delete last element
last=first;

while(last->next->next!=NULL){
    last=last->next;
}
temp=last->next;
free(temp);
last->next=NULL;

printf("\n");

//view
printf("Linked List after deleting last element\n");
last=first;
while(last!=NULL){
    printf("%d\t",last->data);
    last=last->next;
    }
printf("\n");
// return 0;
// }

// //reversal
// struct node *currNode=first, *prevNode=NULL, *nextNode=NULL;

// while(currNode!=NULL){
//     nextNode=currNode->next;
//     currNode->next=prevNode;
    
//     prevNode=currNode;
//     currNode=nextNode;
// }
// first=prevNode;
// printf("\n");

// //view
// printf("Linked List after reversal\n");
// last=first;
// while(last!=NULL){
//     printf("%d\t",last->data);
//     last=last->next;
//     }
// printf("\n");

// //delete at position
// struct node *previous=NULL;
// temp=first;
// int pos;
// int i=1;
// printf("Enter position to delete:\n");
// scanf("%d",&pos);
// while(i<pos && temp!=NULL){
//     previous=temp;
//     temp=temp->next;
//     i++;
// }
// previous->next=temp->next;
// free(temp);
// //view
// printf("Linked List after deletion\n");
// last=first;
// while(last!=NULL){
//     printf("%d\t",last->data);
//     last=last->next;
//     }
// printf("\n");

// //insertion at position
// int data,pos,i;
// struct node* ptr=(struct node*)malloc(sizeof(struct node));
// printf("Enter data to insert:\n");
// scanf("%d",&data);
// ptr->data=data;
// ptr->next=NULL;
// printf("Enter position at which you want to insert:\n");
// scanf("%d",&pos);
// temp=first;
// while (i<pos-1){
//     temp=temp->next;
// }
// ptr->next=temp->next;
// temp->next=ptr;
// printf("\n");
// //view
// printf("Linked List before deletion.\n");
// last=first;
// while (last!=NULL){
//     printf("%d\t",last->data);
//     last=last->next;
// }
// printf("\n");

// //insertion at begining
// struct node *ptr=(struct node*)malloc(sizeof(struct node));
// printf("Enter data to insert at begining\n");
// scanf("%d",&ptr->data);
// ptr->next=first;
// first=ptr;
// //view
// printf("Linked List before deletion.\n");
// last=first;
// while (last!=NULL){
//     printf("%d\t",last->data);
//     last=last->next;
// }
// printf("\n");

//insertion at last
struct node *ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter data to insert at last\n");
scanf("%d",&ptr->data);
ptr->next=NULL;

temp=first;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=ptr;
//view
printf("Linked List after insertion at last:\n");
temp=first;
while (temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->next;
}
printf("\n");
return 0;
}
    

    