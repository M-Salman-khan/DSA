#include<iostream>
#include<string>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void addNodeAtGivenPOS(Node* &head){
    struct Node *insertedNode=(struct Node*)malloc(sizeof(struct Node));
    
    int pos,i=1;
    cout<<"Enter position that you want to insert the node : ";
    cin>>pos;

    cout<<"Enter Node data: ";
    cin>>insertedNode->data;
    
    Node* temp=head;
    // Case 1 insert node at begining
    if(pos==1){
        insertedNode->next=head;
        head=insertedNode;
        return;
    }
    // Move temp to (pos-1)th node
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    insertedNode->next=temp->next;
    temp->next=insertedNode;
}
void addNodeAtEnd(Node* &head){
    struct Node *insertedNode, *temp;
    insertedNode=(struct Node*)malloc(sizeof(struct Node));
    cout<<"Enter node data that you want to insert at end : ";
    cin>>insertedNode->data;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=insertedNode;
}
void addNodeAtBegining(Node* &head){
    struct Node *insertedNode;
    insertedNode=(struct Node*)malloc(sizeof(struct Node));
    cout<<"Enter node data that you want to insert at beginning : ";
    cin>>insertedNode->data;
    insertedNode->next=head;
    head=insertedNode;
}
void printNodes(Node* &temp,Node* &head){
    temp=head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    struct Node *head, *insertedNode,*newNode,*temp;
    head=0;
    int choice=1;
    while(choice){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        cout<<"Enter data : ";
        cin>>newNode->data;
        newNode->next=0;

        if(head==0){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        cout<<"Do you want to continue (0,1): ";
        cin>>choice;
    }
    
    // addNodeAtBegining(head);
    // printNodes(temp,head);
    // addNodeAtEnd(head);
    addNodeAtGivenPOS(head);
    printNodes(temp,head);
    return 0;
}