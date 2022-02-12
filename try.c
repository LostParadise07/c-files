#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int key;
    struct node *left;
    struct node *right;
} Node;

/*create new node*/
Node * newNode(int key)
{

    Node *ptr = (Node *)malloc(sizeof(Node));

    ptr->key = key;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

/*inserting node */
Node * insert(Node *p, Node *newNode)
{

    if(!p)
    {
        printf("key %d\t inserted\n", newNode->key);
        return newNode;
    }
    if(newNode->key > p->key)
    {

        insert(p->right, newNode);
        if(!(p->right))
            p->right = newNode;
    }
    else
    {
        insert(p->left, newNode);
        if(!(p->left))
            p->left = newNode;
    }
    return p;
}

/* searching key */
void search(Node *p, int searchKey)
{

    if(!p)
    {
        printf("\nNo key found for value - %d.\n", searchKey);
        return ;
    }

    if(p->key == searchKey)
    {
        printf("\nKey %d\tfound\n", searchKey);
    }

    else if(p->key < searchKey)
        search(p->right, searchKey);
    else
        search(p->left, searchKey);

}

/* inorder successor  */
Node * getInSuccessor(Node *p)
{

    while(p->left != NULL)
        //this will give inorder successor
        p = p->left;

    return p;
}

Node * deletion(Node *p, int delKey)
{

    struct node *ptr;

    if(!p)
    {
        printf("\nUnable to delete. No such key exists.\n");
        return p;
    }

    else if(delKey > p->key)
        p->right = deletion(p->right, delKey);
    else if(delKey < p->key)
        p->left = deletion(p->left, delKey);


    else
    {

        if(p->left == NULL)
        {
            ptr = p->right;
            free(p);
            return ptr;
        }
        else if(p->right == NULL)
        {
            ptr = p->left;
            free(p);
            return ptr;
        }


        ptr = getInSuccessor(p->right);
        p->key = ptr->key;
// Deleting  the inorder successor
        p->right = deletion(p->right, ptr->key);
    }
    return p;
}

/* Preorder traversal */
void traversePreorder(Node *p)
{

    if(!p)
        return ;

    printf("%d ", p->key);
    traversePreorder(p->left);
    traversePreorder(p->right);
}

/* Inorder traversal */
void traverseInorder(Node *p)
{

    if(!p)
        return ;

    traverseInorder(p->left);
    printf("%d ", p->key);
    traverseInorder(p->right);
}

/* Postorder traversal */
void traversePostorder(Node *p)
{

    if(!p)
        return ;

    traversePostorder(p->left);
    traversePostorder(p->right);
    printf("%d ", p->key);
}

int main(void)
{

    Node *root = NULL;

    root = insert(root, newNode(20));
    insert(root, newNode(800));
    insert(root, newNode(340));
    insert(root, newNode(405));
    insert(root, newNode(204));
    insert(root, newNode(100));

    search(root, 340);

    search(root, 150);

    Node *newRoot = deletion(root, 20);
    if(newRoot)
    {
        printf("\nSuccessfully deleted node. Now tree root node is - %d.\n", newRoot->key);
    }

    search(root, 50);
    search(root, 100);

    printf("\nPreorder Traversal: \n");
    traversePreorder(root);
    printf("\nInorder Traversal: \n");
    traverseInorder(root);
    printf("\nPostorder Traversal: \n");
    traversePostorder(root);

    return 0;
}
