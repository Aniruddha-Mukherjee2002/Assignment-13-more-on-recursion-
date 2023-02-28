#include<stdio.h>
int count(int n)
{
    int c = 0;
    if(n == 0)
    {
        return c;
    }
    return c+1+count(n/10);

}
int main()
{
    printf("%d",count(1234));
    return 0;
}
