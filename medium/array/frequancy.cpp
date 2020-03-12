#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr1[n],arr2[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr1[i]==arr1[j])
                {
                    count++;
                }
            }
            arr2[i]=count;
            count=0;
        }
        sort(arr2,arr2+n);
        for(int i=0;i<n;i++)
        {
            
        }
        
    }
    
}