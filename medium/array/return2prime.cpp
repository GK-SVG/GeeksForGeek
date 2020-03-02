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
        int num=n,con=1,count1=0,count2=0,count3=0;
        while (con)
        {
            num--;
            count1++;
            for (int i = 2; i*i < num; i++)
            {
                if(num%i==0)
                {
                    count2++;
                }
            }
            for(int j=2;j*j<count1;j++)
            {
                if(count1%j==0)
                {
                    count3++;
                }
            }
            if(count2==0 && count3==0)
            {
                if(count1+num==n)
                {
                    con--;
                    cout<<count1<<" "<<num<<endl;
                }
            }
        
    }
    
  }
  return 0;
}