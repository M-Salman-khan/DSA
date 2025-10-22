#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void reverseList(struct Node **head){
    struct Node *prevNode=NULL,*nextNode=NULL,*currNode=*head;
    while(currNode!=NULL){
        nextNode=currNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    *head=prevNode;
}
int main() {
    struct Node *newNode,*head,*temp;
    head=NULL;
    int choice=1;
    while(choice){
        newNode=(struct Node*)(malloc(sizeof(struct Node)));
        newNode->next=NULL;
        printf("Enter new node data: ");
        scanf("%d",&newNode->data);
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        printf("Enter choice: [0 for exit and 1 for continue]");
        scanf("%d",&choice);
    }
    reverseList(&head);
    display(head);
    return 0;
}