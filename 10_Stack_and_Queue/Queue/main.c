#include <stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int isFull(){
    return rear==max-1;
}
int isEmpty(){
    return rear==-1;
}
void enque(int ele){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=ele;
        printf("Element is append succecssfully!\n");
    }
    else if(isFull()){
        printf("Queue Overflow! \n");
    }
    else{
        queue[++rear]=ele;
        printf("Element is append succecssfully!\n");
    }
}
int display(){
    if(isEmpty()){
        printf("Queue is empty\n");
    }
    else{
        int i=front;
        while(i<=rear){
            printf("%d\n",queue[i++]);
        }
    }
}
int deque(){
    if(isEmpty()){
        printf("Queue Underflow! \n");
        return -1;
    }
    else{
        int val=queue[front++];
        if (front > rear) {
            front = rear = -1;
        }
        return val;
    }
}
int main() {
    enque(45);
    enque(52);
    enque(98);
    display();
    printf("Popped element is: %d\n",deque());
    printf("Popped element is: %d\n",deque());
    printf("Popped element is: %d\n",deque());
    printf("Popped element is: %d\n",deque());
    display();
    return 0;
}