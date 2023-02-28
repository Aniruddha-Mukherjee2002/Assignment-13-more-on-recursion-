#include<stdio.h>
int calculateSum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n+calculateSum(n-1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of %d natural numbers is : %d",n,calculateSum(n));
    return 0;
}
