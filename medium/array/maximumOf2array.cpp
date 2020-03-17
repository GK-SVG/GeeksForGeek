#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n,max=0;
        cin>>n;
        int arr[n];
        for(int i=0 ;i<n;i++)
        cin>>arr[i];
        // for(int i=0 i<n;i++;)
        // cin>>arr2[i];
         for (int i = 0; i < n; i++)
         {
            for (int j = n-1; j>i; j--)
            {
                if(arr[i]<=arr[j])
                {
                    unsigned int dif;
                    dif=j-i;
                    if(max<dif)
                    max=dif;
                }
            }
               
         }
         cout<<max<<endl;
        
    }
    
}