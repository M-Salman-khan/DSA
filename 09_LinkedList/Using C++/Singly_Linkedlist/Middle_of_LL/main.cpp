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
    Node* middleNode(Node* head) {// Leetcode function - Better approach
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void find(){// brutforce approach
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int middle=count/2;
        temp=head;
        for(int i=0;i<middle;i++){
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main(){
    // cout<<"Hello world";
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    // ll.push_back(60);
    // ll.display();
    ll.find();
    // ll.display();
    return 0;
}