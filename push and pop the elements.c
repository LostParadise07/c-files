#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isempty(struct stack *ptr){
if(ptr->top==-1){
    return 1;
}
else
    {
    return 0;
}
}
int isfull(struct stack *ptr){
if(ptr->top==ptr->size-1){
    return 1;
}
else
    {
    return 0;
}
}
int push(struct stack*ptr,int val){
if(isfull(ptr)){
    printf("stack overflow can not push %d to stack\n",val);
}

else
    {
    ptr->top++;
    ptr->arr[ptr->top]=val;
}
}
int pop(struct stack*ptr){
if(isempty(ptr)){
    printf("stack under flow can not pop to stack\n");
    return -1;
}
else{
        int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
}
int main(){
struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size *sizeof(int));
printf("stack has been created\n");
printf("before pushing , FULL %d\n",isfull(sp));
printf("before pushing, EMPTY %d\n",isempty(sp));
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,43);
push(sp,56);
printf("After pushing full %d\n",isfull(sp));
printf("after pushing empty %d\n",isempty(sp));
printf(" popped %d out stack\n",pop(sp));
}
