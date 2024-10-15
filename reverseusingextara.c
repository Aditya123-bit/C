#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int temp[5];
    for(int i=0;i<5;i++)
    {
        temp[i]=a[4-i];
    }
    for(int i=0;i<5;i++)
    {
         a[i]=temp[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}