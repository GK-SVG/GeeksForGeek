#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n,add=0;
        cin>>n;
        int arr[n];
        for(int i=0 ;i<n;i++)
        cin>>arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]<arr[j])
                {
                    add+=arr[j];
                    break;
                }
            }
            
        }
       cout<<add<<endl; 
    }
}