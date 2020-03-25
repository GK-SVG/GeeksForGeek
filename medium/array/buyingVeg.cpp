#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
         int n,adjacent=-1;
         long long int sum=0;
        cin>>n;
        long long int arr[n][3];
        for (long long int i = 0; i < n; i++)
        {
            for ( int j = 0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (long long int i = 0; i < n; i++)
        {
            int min=arr[i][0];
            for ( int j = 0; j < 3; j++)
            {
                if(adjacent==j)
                {
                   if(min==arr[i][j])
                   min=arr[i][j+1];
                }
                else
                {
                  
                  if(arr[i][j]<=min)
                  {
                    min=arr[i][j];
                    adjacent=j;
                  }
                }
              // cout<<min<<endl;
            }
            sum+=min;
        }
        cout<<sum<<endl;
    }
}
