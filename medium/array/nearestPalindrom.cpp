#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,sum1=0,sum2=0,sum3=0,count=1,reminder;
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }
       for (int i = n-1; i >=0; i--)
       {
          sum1+=count*arr[i];
          count=count*10; 
       }
       int con=1;
       while(con)
       {
           sum1=sum1+1;
           sum3=sum1;
           while(sum3>0)
             {
                reminder=sum3%10;
                sum2=(sum2*10)+reminder;
                sum3=sum3/10;
             }
       
            if(sum2==sum1)
             {
               con--;
             }    
       }
       for (int i = n-1; i >= 0 ; i--)
       {
           arr[i]=sum2%10;
           sum2=sum2/10;
       }
       for (int i = 0; i < n; i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl; 
    }
}