#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int max=a[0];
    int smax=a[0];
    for(int i=0;i<5;i++)
    {
    if(max<a[i]) 
     max=a[i];
    }
    for(int i=0;i<5;i++)
    {
    if (a[i]!=max && smax<a[i]) 
     smax=a[i];
    }
    printf("%d",smax);
    return 0;
}