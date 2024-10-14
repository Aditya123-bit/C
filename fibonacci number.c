#include<stdio.h>
int fibo(int n){
    // int a=1;
    // int b=1;
    // int sum =0;
    // for(int i=1;i<=n-2;i++)
    // {
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    // }
    if (n==1||n==2) return 1;
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    int fibonacci = fibo(n);
    printf("the %dth fibonacci is %d", n,fibonacci);
  
    return 0;
}