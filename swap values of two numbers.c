#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);

    printf(" Enter second number : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swapping : \n");
    printf("First number is %d\n", a);
    printf("Second number is %d\n", b);

    return 0;
}
