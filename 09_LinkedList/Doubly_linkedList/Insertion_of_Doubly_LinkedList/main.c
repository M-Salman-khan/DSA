#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void display(struct Node* head,struct Node* temp){
    temp=head;
    while (temp!=0){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void insertAtEnd(struct Node **head){
    struct Node *temp,*newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->prev = NULL;
    temp=*head;
    while(temp->next!=0){
        temp=temp->next;
    }
    printf("Enter the value you want to insert at begining: ");
    scanf("%d",&newNode->data);
    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtBeg(struct Node **head){
    struct Node *temp,*newNode;
    newNode=(struct Node*)(malloc(sizeof(struct Node)));
    newNode->prev=NULL;
    newNode->next=NULL;
    printf("Enter data want to insert at the begining: ");
    scanf("%d",&newNode->data);
    (*head)->prev=newNode;
    newNode->next=(*head);
    (*head)=newNode;
}
void insertGivenPos(struct Node **head){
    struct Node *temp;
    temp=*head;
    int counter=1;
    while(temp->next!=0){
        temp=temp->next;
        counter++;
    }
    int pos=1;
    printf("Enter position you want to insert the data: ");
    scanf("%d",&pos);
    if(pos>counter+1){
        printf("Aukaat me rehkar enter kar position\n");
        return;
    }
    else if(pos==1){
        insertAtBeg(head);
        return;
    }
    else if(pos==counter+1){
        insertAtEnd(head);
        return;
    }
    else{
        struct Node *newNode;
        newNode=(struct Node*)malloc(sizeof(struct Node));
        temp=*head;
        int i=1;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        printf("Enter data you want to insert at %d index:", pos);
        scanf("%d",&newNode->data);
        newNode->prev=temp;
        newNode->next=temp->next;
        temp->next=newNode;
    } 
}
int main() {
    struct Node *head,*newNode,*temp;
    head=0;
    int choice=1;
    while(choice){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->prev=0;
        newNode->next=0;
        printf("Enter your node data : ");
        scanf("%d",&newNode->data);
        if(head==0){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
        printf("Do you want to continue filling data (0 or 1): ");
        scanf("%d",&choice);
    }
    int choice_2;
    printf("You want to insert the node?Press\n[0] for atBegining. [1] for atEnd. [2] for atGivenPos. [3] for exit.\n");
    printf("Enter your choice: ");
    scanf("%d",&choice_2);
    if(choice_2==0){
        insertAtBeg(&head);
    }
    else if(choice_2==1){
        insertAtEnd(&head);
    }
    else if(choice_2==2){
        insertGivenPos(&head);
    }
    else if(choice_2==3){
        display(head,temp);
        return 0;
    }
    else{
        printf("Aukaat me rehkr choice enter kr\n");
    }
    display(head,temp);
    return 0;
}