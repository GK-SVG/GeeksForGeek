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
        int arr[n][n],arr2[n*n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        arr2=arr;
        for (int i = 0; i < n*n; i++)
        {
            cout<<arr2[i]<<" ";
        }
    }
}