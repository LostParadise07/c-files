#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void linklisttraversal(struct node*ptr){
while(ptr !=NULL)
    {
    printf("ELEMENTS : %d\n",ptr->data);
    ptr=ptr->next;
}
}

//deletion at first
struct node*deleteatfirst(struct node*head){
struct node*ptr=head;
head=head->next;
free(ptr);
return head;
};
//deletion at given index
struct node*deleteatindex(struct node*head, int index){
struct node*p=head;
struct node*q=head->next;
for(int i=0;i<index-1;i++)
{
p=p->next;
q=q->next;
}
p->next=q->next;
free(q);
return head;
};
//deletion at end
struct node*deleteatend(struct node*head){
struct node*p=head;
struct node*q=head->next;
while(q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;
}
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
printf("link list before deletion \n");
linklisttraversal(head);
printf("link list after deletion \n");
//head=deleteatfirst(head);
//head=deleteatindex(head,2);
head=deleteatend(head);
linklisttraversal(head);
return 0;
}
