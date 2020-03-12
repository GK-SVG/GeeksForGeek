#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i <= 0; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        for (int i = 1; i < n-1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j>0 && j!=n-1)
                {
                    cout<<" ";
                    continue;
                }
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        if(n>1){
        for (int i = n-1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
        }
        
        cout<<endl;
    }
    return 0;
}