#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,max=0,count=0;
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            count=0
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j]==1)
                {
                    count++;
                }
                
            }
            if(count>max)
            {
                max=i;
            }
        }
        cout<<max<<endl;
        
    }
    return 0;
}