#include<stdio.h>
int main()
{
    int n;
    printf("enter last term:");
    scanf("%d",&n);
    for (int i=1; i<=(2*n-1); i=i+2)
    {
        printf("%d ",i);
    }
    
    return 0;
}