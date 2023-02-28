#include<stdio.h>
int sumdigit(int n)
{
    int mod,sum = 0;
    if(n == 0)
    {
        return 0;
    }
    mod = n%10;
    return mod+sumdigit(n/10);
}
int main()
{
    printf("Sum of all the digits of a number is : %d", sumdigit(123));
    return 0;
}
