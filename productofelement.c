#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d element of array:\n",i+1);
        scanf("%d",&a[i]);
    }

    int product=1;
    for(int i=0;i<5;i++)
    {
        product=product*a[i];

    }
    printf("sum of element:%d",product);
    return 0;
}