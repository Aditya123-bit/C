#include<stdio.h>
int power(int a,int b){
    // int p =1;
    // for(int i=1;i<=b;i++)
    // {
    //     p=p*a;
    // }
    // return p;

    if(b==0) return 1;
    int recAns=a*power(a,b-1);
    return recAns;
}
int main()
{
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter exponial:");
    scanf("%d",&b);
    int ans = power(a,b);
    printf("%d to the power %d is %d",a,b,ans);
    return 0;
}