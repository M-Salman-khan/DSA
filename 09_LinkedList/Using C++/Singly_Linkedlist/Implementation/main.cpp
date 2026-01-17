#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
};

class List{
    Node *head;
    Node *tail;
    public:
        List(){
            head=tail=NULL;
        }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
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
    void pop_front(){
        Node* temp=head;
        // temp=temp->next;
        head=head->next;
        temp->next=NULL;
        delete temp;
        // head=temp;
    }
    void pop_back(){
        Node* temp=head;
        // Node* prevNode=NULL;
        while(temp->next!=tail){
            // prevNode=temp;
            temp=temp->next;
        }
        // cout<<temp->data<<endl;
        temp->next=NULL;
        delete tail;
        tail=temp;
        // tail=prevNode;

        // tail->next=NULL;
        // delete temp;

    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

    void insert(int data,int pos){
        if(pos<0) return;
        if(pos==0) {
            push_front(data);
        }
        else{
            Node* temp=head;
            Node* newNode=new Node(data);
            for (int i = 0; i < pos-1; i++){
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
            // cout<<temp->data<<endl;
        }
    }
};
int main(){
    
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(60);
    // ll.pop_front();
    // cout<<"Before"<<endl;
    // ll.display();
    // cout<<"After"<<endl;
    // ll.pop_back();
    // ll.display();
    
    // cout<<"\n\n";
    ll.insert(40,0);
    ll.display();
    return 0;
}