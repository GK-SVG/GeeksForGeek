#include<iostream>
#include<stdio.h>
using namespace std;
int dbp(int n)
{
    int num=-1;
    if(n%2==0)
    {
         num=2;
    }
    if(n%3==0)
    {
        num=3;
    }
    if(n%11==0)
    {
        num=11;
    }
    return num;
}
int main()
{
    int n;
    cin>>n;
    n=dbp(n);
    cout<<n;
    int a,b;
    scanf("%d,%d",&b,&b);
    printf("%d\n%d",a,b)
    return 0;
}