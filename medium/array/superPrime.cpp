#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,count1=0,count2=0,count3=0,arr[2];
        cin>>n;
        for (int i = 2; i < n; i++)
        {
            for (int j = 2; j*j <= i; j++)
            {
                if(i%j==0)
                {
                    count1++;
                }
            }
            if(count1==0)
            {
                for (int k = i; k < n; k++)
                {
                    for (int l = 2; l*l <= k; l++)
                    {
                        if(k%l==0)
                        {
                            count2++;
                        }
                    }
                    if(count2==0)
                    {
                        if(i+k==n)
                        {
                            cout<<i<<" "<<k<<endl;
                           count3++;
                        }
                    }
                    count2=0;
                }
                
            }
            count1=0;
        }
        cout<<count3<<endl;
    }
    return 0;
}