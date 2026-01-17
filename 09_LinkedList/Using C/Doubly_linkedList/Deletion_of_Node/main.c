#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
void display(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void deleteFromBeg(struct Node **head){
    if((*head)==NULL){
        printf("Node is empty!");
        return;
    }

    struct Node *temp=*head;
    *head=temp->next;
    if(*head!=NULL){
        (*head)->prev=NULL;
    }
    printf("Node deleted!\n");
    free(temp);
}
void deleteFromEnd(struct Node **head){
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp=*head;
    if(temp->next==NULL){
        free(temp);
        *head=NULL;
        printf("Node deleted successfully!\n");
        return;
    }
    while (temp->next!=NULL){
        temp=temp->next;
    }
    (temp->prev)->next=NULL;
    free(temp);
    printf("Node deleted successfully!\n");
}
void deleteFromGivenPos(struct Node **head){
    struct Node *temp=*head;
    int counter=1,pos=1;
    printf("Enter position you want to delete the node: ");
    scanf("%d",&pos);

    while(temp->next!=NULL){
        temp=temp->next;
        counter++;
    } 
    if(pos<1 || pos>counter){
        printf("Phir Aukaat bhul gya ?");
        return;
    }
    else if(pos==1){
        deleteFromBeg(head);
        return;
    }
    else if(pos==counter){
        deleteFromEnd(head);
        return;
    }
    temp=*head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    (temp->prev)->next=temp->next;
    (temp->next)->prev=temp->prev;
    free(temp);
    return;
}
int main() {
    struct Node *head;
    int choice=1;
    head=NULL;
    while(choice){
        struct Node *newNode,*temp;
        newNode=(struct Node*)(malloc(sizeof(struct Node)));
        newNode->prev=NULL;
        newNode->next=NULL;
        printf("Enter data: ");
        scanf("%d",&newNode->data);
        
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        
        printf("Do you want to enter more nodes? [Yes(1) or No(0)]: ");
        scanf("%d",&choice);
    }
    int choice_2=0;
    printf("Do you wnat to delete Node from given pos? [Yes(1) or No(0)]: ");
    scanf("%d",&choice_2);
    choice_2?deleteFromGivenPos(&head):"";
    display(head);
    return 0;
}