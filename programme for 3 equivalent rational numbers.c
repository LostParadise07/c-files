#include <stdio.h>
int main()
{
    int n,d,n1,d1,n2,d2,n3,d3;
    printf("Enter a number in the form of numerator/denominator:");
    scanf("%d/%d", &n,&d);
    printf("\nThe rational number is : %d/%d",n,d);
    n1 = n*2;
    d1 = d*2;
    n2 = n*3;
    d2 = d*3;
    n3 = n*5;
    d3 = d*5;
    printf("\nThe three equivalent rational numbers of %d/%d is %d/%d, %d/%d and %d/%d",n,d,n1,d1,n2,d2,n3,d3);
    return 0;
}
