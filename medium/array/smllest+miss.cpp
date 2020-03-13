#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) { 
    int max1=0,count=0;
    sort(arr,arr+n);
    max1=arr[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count=i;       
            break;
        }
    }
    if(arr[count]>1)
        max1=1;
    else 
        {
            for(int i=count; i<n;i++)
            {
                if((i+1)<n)
                {
                  if(arr[i]+1 < arr[i+1])
                  {
                    max1=arr[i]+1;
                    break;
                  }
                }
            }
        }
    return max1;
} 
int main()
{

int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n) ;
    cout<<missingNumber(arr,n)<<endl;

}
return 0;
}