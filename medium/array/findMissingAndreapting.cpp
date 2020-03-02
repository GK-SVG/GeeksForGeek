#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
       int n,miss,repeat;
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }
       cout<<endl;
       sort(arr,arr+n);
       for (int i = 0; i < n; i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;
       for (int i = 0; i < n; i++)
       {
           if(arr[i]==arr[i+1])
           {
               for (int j = 0; j < n; j++)
               {
                   if(arr[j+1]!=(arr[j]+1) && arr[j]!=arr[j+1])
                   {
                       miss=arr[j]+1;
                       break;
                   }
               }
               repeat=arr[i];
               break;
           }
       }
       cout<<repeat<<" "<<miss<<endl;
    }
    return 0;
}