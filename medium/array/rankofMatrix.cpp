#include<iostream>
using namespace std;
void ecaloneForm(int arr[], int n,int m)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]>1)
            
        }
        
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for (int  i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        ecaloneForm(arr,n,m);   
    }
}