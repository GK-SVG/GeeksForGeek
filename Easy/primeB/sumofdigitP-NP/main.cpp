#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,count=0,reminder,sum,sum2=0;
        cin>>N;
        sum=N;
        while (sum>=10)
        {
            sum2=0;
            while (N>0)
            {
                reminder=N%10;
                sum2+=reminder;
                N=N/10;
            }
            N=sum=sum2;
        }
        if(sum%2==1 && sum!=9 || sum==2)
            cout<<"P"<<endl;
        else
            cout<<"NP"<<endl;

    }
    return 0;
}