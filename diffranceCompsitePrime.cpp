#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,m;
        cin>>l>>m;
        int totalnum=(m-l+1),count1=0,count2=0;
        for (int i = l; i <= m; i++)
        {
            count1=0;
            for (int j = 2; j*j <= i; j++)
            {
                if(i%j==0)
                count1++;
            }
            if (count1==0 && i!=1)
            count2++;
        }
        totalnum-=count2;
        totalnum-=count2;
        cout<<totalnum<<endl;
        
    }
    return 0;
}