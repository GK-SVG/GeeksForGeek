#include<iostream>
using namespace std;
void fun()
{
    int n,m,count=0;
    cin>>n>>m;
    int *arr1,*arr2;
    arr1= new int[n];
    arr2= new int[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i]==arr2[j])
            {
             count++;
             break;
            }
        }
        if(count==0)
        {
            cout<<arr1[i]<<" ";
        }
        else
        {
           count=0;
        }
    }
   delete[] arr1;
   delete[] arr2; 
}
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        fun();
        cout<<endl;
    }
    return 0;
}