#include<iostream>
#include<string>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void delFromBeg(Node* &temp,Node* &head){
    temp=head;
    head=temp->next;
    free(temp);
}
void printLinkedList(Node* &temp,Node* &head){
    temp=head;
    cout<<"\nYour created Node is: ";
    while(temp!=0){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp;
}
int main(){
    struct Node *head, *newNode, *temp;
    head=nullptr;
    int choice=1;
    while(choice){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        cout<<"Enter Data: ";
        cin>>newNode->data;
        newNode->next=0;
        if(head==nullptr){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        cout<<"Enter choice between 0 or 1: ";
        cin>>choice;
    }
    cout<<"Before: ";
    printLinkedList(temp,head);
    delFromBeg(temp,head);
    cout<<"After: ";
    printLinkedList(temp,head);
    return 0;
}