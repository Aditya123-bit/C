#include<stdio.h>                                             
void incressing(int x,int n){                                   
    if(x>n)return;                                                          
    printf("%d\n",x);                                          
    incressing(x+1,n);                                                          
    return;                                                                                                                                                   
}                                                                                
int main()                                                                                
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    incressing(1,n);
    return 0;
}