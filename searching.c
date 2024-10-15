#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5]={2,4,8,9,10};
    int x=10;
    int index=0;
    bool flag=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
          flag=true;
          index=i;
          break;
        }
    }
    if(flag==false)printf("%d is not present in array",x);
    else printf("%d is prsent in array at index %d",x,index);
    return 0;
}