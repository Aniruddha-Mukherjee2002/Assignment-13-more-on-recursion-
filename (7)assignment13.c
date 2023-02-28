#include<stdio.h>
int hcf(int a,int b)
{
    if( b == 0)
    {
        return a;
    }
    hcf(b,a%b);
}
int main()
{
    printf("%d",hcf(6,12));
    return 0;
}
