#include<stdio.h>
int calculateSum(int n)
{
    if(n == 0)
    {
        return 0;
    }

   return (n*n)+calculateSum(n-1);

}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of first %d square  is : %d",t,calculateSum(n));
    return 0;
}


