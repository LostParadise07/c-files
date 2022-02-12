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

// insert at first
struct node*insertatfirst(struct node*head,int data){
struct node*ptr=(struct node*)malloc(sizeof (struct node));
ptr->next=head;
ptr->data=data;
return ptr;
};

//insert at end
struct node*insertatend(struct node*head,int data){
struct node*ptr=(struct node*)malloc(sizeof (struct node));
ptr->data=data;
struct node*p=head;
while(p->next!=NULL){
    p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
};

//insert at between
struct node*insertatindex(struct node*head,int data,int index){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=head;
int i=0;
while(i!=index-1)
{
    p=p->next;
    i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
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
printf("\n link list after insertion of 76 at beginning , at index 2 and at end\n");
head=insertatfirst(head,76);
//printf("\nlink list after insertion at index\n");
head=insertatindex(head,76,2);
//printf("\nlink list after insertion at end\n");
head=insertatend(head,76);
linklisttraversal(head);
return 0;
}
