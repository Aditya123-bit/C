#include<stdio.h>
int factorial(int x)
{
    if(x==1 || x==0) return 1;
    // int fact=1;
    // for(int i=2;i<=x;i++)
    // {
    //     fact=fact*i;
    // }
    int recans= x*factorial(x-1);
    return recans;
}
int main()
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}