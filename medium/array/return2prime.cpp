#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51,53};
        cin>>n;
       // cout<<"n="<<n<<endl;
        int num;
            for (int i = 0; i < 17; i++)
            { 
              int count1=0;
              num=n;
              num-=arr[i];
            //   cout<<"num="<<num<<" arr="<<arr[i]<<endl;
              for (int j = 2; j*j < num; j++)
              {
                  cout<<j<<endl;
                if(num%j==0)
                {
                    count1++;
                }
              }  
              cout<<"count="<<count1<<endl;      
              if(count1==0)
              {
                if(arr[i]+num==n)
                {
                    cout<<arr[i]<<" "<<num<<endl;
                    break;
                }
              }
            }
    
  }
  return 0;
}