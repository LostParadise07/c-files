#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data   = val;
    newNode->prev  = NULL;
    newNode->next = NULL;

    return newNode;
}

struct node *insert(struct node *root, int val)
{
    if(root == NULL)
        return getNewNode(val);
    if(root->data< val)
        root->next = insert(root->next,val);
    else if(root->data > val)
        root->prev = insert(root->prev,val);
    return root;
}
void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->prev);
    printf("\n%d ",root->data);
    inorder(root->next);
}

int main()
{
    struct node *root = NULL;
    root = insert(root,100);
    root = insert(root,50);
    root = insert(root,150);
    root = insert(root,80);
    root = insert(root,800);
    root = insert(root,850);
    root = insert(root,550);
    root = insert(root,70);
    root = insert(root,800);

    inorder(root);

    return 0;
}
