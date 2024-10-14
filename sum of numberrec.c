#include<stdio.h>
int sum(int n)
{
    if(n==0) return 0;
     int recans=n+sum(n-1);
    return recans;
}
int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
     int s=sum(n);
  printf("%d",s);
    return 0;
}