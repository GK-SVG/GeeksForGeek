#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n]={0};
        int arr2[m][3];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>arr2[i][j];
            }
            
        }
        for (int i = 0; i < m; i++)
        {
            int a,b,k;
            a=arr2[i][0];
            b=arr2[i][1];
            k=arr2[i][2];
            for (int j = a; j <=b ; j++)
            {
                arr[j]+=k;
            }
            
        }
        sort(arr,arr+n);
        cout<<arr[n-1]<<endl;
    }
    
}