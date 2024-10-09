#include<stdio.h>
int main()
{
    int n;
    printf("enter the digit:");
    scanf("%d",&n);
    int sum=0;
    int ld;
    while(n!=0)
    {
        ld=n%10;
         sum=sum+ld;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}