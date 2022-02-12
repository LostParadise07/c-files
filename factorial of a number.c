#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int answer=1;
    for(int i=1; i<=n; i++)
    {
        answer=answer*i;
    }
    return answer;
}
int main()
{
    int n;
    {
        printf("enter the value of n:");
        scanf("%d",&n);
        int answer=factorial(n);
        printf("the factorial of %d is %d",n,answer);
    }
    return 0;
}
