//QUESTION NO 4
#include<stdio.h>
void pattern(int n)
{
    for (int i = 1 ; i <= n+1 ; i++)
    {
        for (int j = 1 ; j <= (2 * n + 2)-(2 * i) ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= (2*i) ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= (n+1)-i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf(" <======================>\n ");
    pattern(n);
    return 0;
}
