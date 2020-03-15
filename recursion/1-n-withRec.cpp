#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
        return;
     else
     {
          print(n-1);
          cout<<n<<" ";
     }
}
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        print(n);
    }
    
}