#include<stdio.h>
int main(){
char s[]="asrar";
char temp;
int i, len=0;
//printf("enter anything in string\n");
//scanf(" %c",&s);
while(s[len]!='\0')
{
    len++;
}
printf("the length of string is %d\n",len);
for(i=0;i<(len-1)/2;i++)
{
 temp=s[i];
 s[i]=s[len-1-i];
 s[len-1-i]=temp;
}
printf("the string now is : %s",s);
return 0;
}

