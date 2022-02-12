#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("stack is empty\n");
        return 1;
    }
    else
    {
       return 0;
    }
}
int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        printf("stack is full\n");
        return 1;
    }
    else
        {
            return 0;
        }
}
int push(struct stack *ptr, int val)
{
    if(isfull(ptr))
    {
        printf("stack overflow and can not push %d to stack\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("stack underflow can not pop elements\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;

    }
}
int peek(struct stack*ptr,int i)
{
    int a=ptr->top-i+1;
    if(a<0)
    {
        printf("invalid peeking\n");
        return -1;
    }
    else
    {
        return ptr->arr[a];
    }
}
int stacktop(struct stack* ptr)
{
    return ptr->arr[ptr->top];
}
int stackbottom(struct stack *ptr)
{
    return ptr->arr[0];
}
int main()
{
    struct stack*sp= (struct stack*)malloc(sizeof(struct stack));
                      sp->size=10;
                      sp->top=-1;
                      sp->arr=(int *)malloc (sp->size*sizeof(int));
                      printf("stack has been created\n");
                      printf("elements before pushing, full %d\n",isfull(sp));
                      printf("elements before pushing,empty %d\n",isempty(sp));
                      push(sp,88);
                      push(sp,77);
                      push(sp,66);
                      push(sp,55);
                      push(sp,44);
                      push(sp,33);
                      push(sp,2);
                      push(sp,4);
                      push(sp,232);
                      push(sp,2);
                      push(sp,2000);
                      printf("elements after pushing, full %d\n",isfull(sp));
                      printf("elements after pushing,empty %d\n",isempty(sp));
                      printf("popped %d from stack\n",pop(sp));
                      printf("popped %d from stack\n",pop(sp));
                      printf("elements after popping, full %d\n",isfull(sp));
                      printf("elements after popping,empty %d\n",isempty(sp));
                      for(int j=1;j<=sp->top+1;j++)
                      {
                         printf("the value at index %d is %d\n",j,peek(sp,j));
                      }
                     printf(" the value of stack top is %d\n",stacktop(sp));
                     printf(" the value of stack bottom is %d\n",stackbottom(sp));
}

