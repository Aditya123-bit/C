#include<stdio.h>
int main()
{
    int n;
    int temp=n;
    printf("enter the digit:");
    scanf("%d",&n);
    int reverse=0;
    int ld;
    while(n!=0)
    {
        ld=n%10;
         reverse=reverse*10;
        reverse=reverse+ld;
        n=n/10;
       
    }
    printf("%d",reverse);
    return 0;
}