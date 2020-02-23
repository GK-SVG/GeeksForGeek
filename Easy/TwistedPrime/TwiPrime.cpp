#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,temp,sum=0,a;
        int count1=0,count2=0;
        cin>>n;
        temp=n;
        while (n>0)
        {
           a=n%10;
           sum=sum*10+a;
           n=n/10;
        }
        for (int j = 2; j*j<=temp; j++)
                {
                    if (temp%j==0)
                    {
                        count1++;
                    }
                    
                }
        for (int j = 2; j*j<=sum; j++)
                {
                    if (sum%j==0)
                    {
                        count2++;
                    }
                    
                }
        if (count1==0 && count2==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
         
    }
    return 0;
} 

