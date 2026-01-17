#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head=tail=NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void reverse(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        // next=curr->next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        display();
        // curr-next=prev;

    }
};
int main(){
    // cout<<"Hello world";
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(60);
    ll.display();
    ll.reverse();
    // ll.display();
    return 0;
}