#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n,sum=0,adjacent=-1;
        cin>>n;
        int arr[n][3];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            int min=arr[i][0];
            for (int j = 0; j < 3; j++)
            {
                if(adjacent==j)
                continue;
                else
                {
                  if(arr[j][i]<=min)
                  {
                    min=arr[j][i];
                    adjacent=j;
                  }
                }
               cout<<min<<endl;
            }
            sum+=min;
        }
        cout<<sum<<endl;
    }
}