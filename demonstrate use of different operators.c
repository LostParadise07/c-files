#include <stdio.h>
int main()
{
    int x = 157, y = 56, res;
    // printing x and y
    printf("x is %d and y is %d\n", x, y);

    res = x + y; // addition
    printf("x+y is %d\n", res);

    res = x - y; // subtraction
    printf("x-y is %d\n", res);

    res = x * y; // multiplication
    printf("x*y is %d\n", res);

    res = x / y; // division
    printf("x/y is %d\n", res);

    res = x % y; // modulus
    printf("x%y is %d\n", res);

    return 0;
}
