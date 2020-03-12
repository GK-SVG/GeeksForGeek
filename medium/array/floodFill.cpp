#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int x,y,k,l;
        cin>>x>>y>>k;
        l=arr[x][y];
        arr[x][y]=k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j]==l)
                {
                    arr[i][j]=k;
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
        cout<<endl;

    }
    return 0;
}