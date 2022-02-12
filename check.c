#include<stdio.h>
#include<math.h>

int fac(int f)
{
    int factorial = 1;
    for (int i = 1; i <= f ; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}
float sum(int n, float x)
{
    float sum = 1;
    for (int i = 1; i <= n ; i++)
    {
        if (i%2 == 0)
    {
            sum = sum + (float)((pow(x,i))/(2*fac(i)));
        }
        else
        {
            sum = sum - (float)((pow(x,i))/(2*fac(i)));
        }
    }
    printf("%f", sum);
}
int main()
{
    int n, x;
    printf("Enter The Value Of n: ");
    scanf("%d", &n);
    printf("Enter The Value Of x: ");
    scanf("%d", &x);
    printf("Sum of Series is: ");
    sum(n, x);
    return 0;
}
