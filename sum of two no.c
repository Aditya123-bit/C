#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b,sum;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum of a and b is %d",sum);
    return 0;
}