#include<stdio.h>
int main()
{
    int arr[5];
    for (int i=0;i<5;i++) 
    {
        printf("enter the element of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    printf("%d  ",arr[i]);
    return 0;
}