#include<stdio.h>
int main()
{
    int n;
    printf("enter last term:");
    scanf("%d",&n);
    int a=100;
    for (int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a=(a* 1/2);
    }
    
    return 0;
}