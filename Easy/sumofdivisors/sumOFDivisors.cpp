#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        for (int i = 1; i <=n ; i++)
        {
            if (n%i==0 && i!=n)
            {
                sum+=i;
                for (int j = 1; j <=i ; j++)
                {
                    if(i%j==0)
                    {
                        sum+=j;
                    }
                }
                
            }
            
        }
        cout<<sum+n<<endl;
    }
    return 0;
}