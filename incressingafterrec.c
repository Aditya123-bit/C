#include<stdio.h>                                             
void incressing(int n){                                   
    if(n==0)return;                                                                                                     
    incressing(n-1);
     printf("%d\n",n);                                                         
    return;                                                                                                                                                   
}                                                                                
int main()                                                                                
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    incressing(n);
    return 0;
}