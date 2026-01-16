#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *left,*right;
};
struct Node *create(){
    int x;
    struct Node *newNode;
    newNode=(struct Node*)(malloc(sizeof(struct Node)));
    printf("\nEnter data: (-1 for no node): ");
    scanf("%d",&x);
    if(x==-1) return 0;
    newNode->data=x;
    printf("\nEnter left child of node %d: ",x);
    newNode->left=create();
    printf("\nEnter right child of node %d: ",x);
    newNode->right=create();
    return newNode;
}
int main() {
    struct Node *root;
    root=0;
    root=create();    
    return 0;
}