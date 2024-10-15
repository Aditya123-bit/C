#include<stdio.h>
void reverse(int a[])
{
    int i=0;
    int j=4;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int a[5]={1,2,3,4,5};
    reverse(a);
    
    for(int i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}