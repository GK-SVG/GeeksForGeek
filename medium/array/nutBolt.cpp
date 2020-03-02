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
        char arr1[n],arr2[n];
        int iarr1[n],iarr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            iarr1[i]=int(arr1[i]);
            iarr2[i]=int(arr2[i]);
        }
        sort(iarr1,iarr1+n);
        sort(iarr2,iarr2+n);
        for (int i = 0; i < n; i++)
        {
            arr1[i]=char(iarr1[i]);
            arr2[i]=char(iarr2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    
}