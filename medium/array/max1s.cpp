#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,max,count=0;
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        max=count;
        int max2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(arr[i][j]==1)
                count++;
            }
            if(count>max)
           {
            max=count;
            max2=i;
           }

            count=0;
        }
       cout<<max2<<endl;
    }
    return 0;
}