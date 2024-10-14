#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a:%d\n",a);
    printf("value of b:%d",b);

    return 0;
}