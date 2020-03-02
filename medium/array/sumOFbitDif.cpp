#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,reminder1,reminder2,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<n;j++)
            {
                int a=arr[i];
                int b=arr[j];
                if(i!=j)
                {
                    while(a>0 || b>0)
                    {
                      if(a>0)
                      {
                          reminder1=a%2;
                      }
                      if(b>0)
                      { 
                         reminder2=b%2;
                      }
                      if (reminder1!=reminder2)
                      {
                          count++;
                      }
                      a=a/2;
                      b=b/2;
                      reminder2=0;reminder1=0;
                    }
                
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}