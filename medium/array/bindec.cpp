#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        ll l,sum=0;
        l=s.length();
        for (ll i = 0; i < s.length(); i++)
        {
            l--;
            if(s[i]=='1')
            sum+=pow(2,l);
        }
        cout<<sum<<"\n";
        if(sum%3==0)
        cout<<"1";
        else
        {
            cout<<"0";
        }
        
       cout<<endl; 
    }
    
}
