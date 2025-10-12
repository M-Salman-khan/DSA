#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
int isFull(){
    return top==max-1;
}
int isEmpty(){
    return top==-1;
}
void push(int ele){
    if(isFull()){
        printf("Stack underflow! Element cant append \n");
    }
    else{
        stack[++top]=ele;
        printf("Element pushed successfully!\n");
    }
}
int pop(){
    if(isEmpty()){
        printf("Stack underflow! Cannot pop\n");
        return -1;
    }
    else{
        return stack[top--];
    }
}
int peek(){
    if(isEmpty()){
        printf("Stack is empty! \n");
        return -1;
    }
    else{
        return stack[top];
    }
}
void display(){
    if(isEmpty()){
        printf("Stack is empty! \n");
    }
    else{
        int i=0;
        while(i<=top){
            printf("%d\n",stack[i++]);
        }
    }
}

int main(){
    push(10);
    push(23);
    printf("Top element is: %d\n",peek());
    printf("Deleted element is: %d\n",pop());
    display();
    return 0;
}