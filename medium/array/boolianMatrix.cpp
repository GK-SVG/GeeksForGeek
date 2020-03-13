#include<iostream>
using namespace std;
int arr2[1001][1001]={0};
void boolmat()
{
    int n,m;
        cin>>n>>m;
        int arr1[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr1[i][j];
            }
            
        }
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(arr1[i][j]==1)
                {
                    if(arr2[i][j]==0){
                     for (int k = 0; k < m; k++)
                     {
                         arr2[i][k]=1;
                     }
                     for (int l = 0; l < n; l++)
                     {
                         arr2[l][j]=1;
                     }
                     
                }}

            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        boolmat();
        cout<<endl;
    }
    return 0;
}