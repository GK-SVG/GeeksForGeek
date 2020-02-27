#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum1=0,sum2=0;
        signed int diff;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i<(n+1)/2)
            {
                sum1+=arr[i];
            }
            else
            {
               sum2+=arr[i];
            }
        }
        diff=sum1-sum2;
        cout<<diff<<endl;
        
    }
    return 0;
}