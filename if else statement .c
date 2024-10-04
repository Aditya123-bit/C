#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("number is divisible by five");
    }
    else
    {
        printf("number is not divisible by five");
    }
    
    
    return 0;
}