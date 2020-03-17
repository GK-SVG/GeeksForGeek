#include<iostream>
#include<sstream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,s1;
        char l;
        int sum=0,count=0;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--)
        {
            s1=s.at(i);
            stringstream ss(s1);
            ss>>l;
            sum+=pow(26,count)*((int)l-64);
            count++;
        }
        cout<<sum;
    }
    
}