#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j,k;
    for(int i=1;i<=5;i++)
    {
        cin>>a[i];
    }
    cout<<"the orginal array is\n :";
    for(int i=1;i<=5;i++)
    {
        cout<<a[i];
    }
    cout<<"enter the position :\n";
    cin>>k;
    j=5;
    while(j>=k)
    {
        a[j+1]=a[j];
    }
    int h;
    cout<<"enter new element:\n";
    cin>>h;
    a[k]=h;
     for(int i=1;i<=5;i++)
    {
        cout<<a[i];
    }

    return 0;
}