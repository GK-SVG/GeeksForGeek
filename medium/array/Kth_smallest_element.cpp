#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        int *arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;
    }
    return 0;
}