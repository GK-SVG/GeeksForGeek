#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count1=0,count2=0;
        cin>>n;
        int n2=n/4;
        for (int i = 2; i<=n2; i++)
        {
            if(n%i==0)
            {
                for (int j = 2; j*j<=i; j++)
                {
                    if (i%j==0)
                    {
                        count1++;
                    }
                    
                }

                if (count1==0)
                {
                    count2++;
                }
                count1=0;
            }
        }
        if(count2==3)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}       