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
        int arr[n],arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i]=arr2[arr2[i]];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}