#include<stdio.h>
int main()
{
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int a=0;
    for (int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
         break;
    }
    if(a==0)
    printf("no is prime");
    else
    printf("no is composite");
    return 0;
}