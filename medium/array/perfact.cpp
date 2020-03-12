#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int num1,num2,count=0,reminder,sum=0;
         num2=num1=n;
         while(n>0)
         {
             n=n/10;
             count++;
         }
         while(num1>0)
         {
             reminder=num1%10;
             num1=num1/10;
             sum+=pow(reminder,count);
         }
         cout<<sum<<endl;
         if(sum==num2)
         {
             cout<<"1";
         }
         else
         {
             cout<<"0";
         }
         cout<<endl;
     }
     return 0;
 }