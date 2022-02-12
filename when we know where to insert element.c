#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
void linklisttraversal(struct node*ptr){
    while(ptr!=NULL){
printf("ELEMENT: %d\n",ptr->data);
ptr=ptr->next;
}
}
//insert at some place
struct node*insertafternode(struct node*head,struct node*previousnode,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=previousnode->next;
previousnode->next=ptr;

return head;
};
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
head=(struct node*)malloc(sizeof (struct node));
second=(struct node*)malloc(sizeof (struct node));
third=(struct node*)malloc(sizeof (struct node));

head->data=45;
head->next=second;
second->data=345;
second->next=third;
third->data=4564;
third->next=NULL;
printf("link list before insertion \n");
linklisttraversal(head);
printf("link list after insertion \n");
head=insertafternode(head,second,76);
linklisttraversal(head);
return 0;
}

