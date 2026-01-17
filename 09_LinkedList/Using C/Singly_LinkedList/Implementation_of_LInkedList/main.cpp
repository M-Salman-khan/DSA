#include<iostream>
#include<string>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head,*newNode,*temp;
    head=0;
    int choice=1;
    while(choice){
        newNode=(struct Node *)malloc(sizeof(struct Node));
        cout<<"Enter data: ";
        cin>>newNode->data;
        newNode->next=0;
        if(head==0){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        cout<<"Do you want to continue (0,1): "<<endl;
        cin>>choice;
    }
    temp=head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}