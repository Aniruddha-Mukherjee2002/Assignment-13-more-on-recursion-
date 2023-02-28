#include<stdio.h>
int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main()
{
   int n = 5;
   for(int i = 0; i < n; i++)
   {
       printf("%d ",fib(i));
   }
}
