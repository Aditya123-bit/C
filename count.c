#include<stdio.h>
int main()
{
    int n;
    printf("enter the digit:");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count=count+1;
    }
    printf("%d",count);
    return 0;
}