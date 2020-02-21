#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
 {
        int N,count=0,reminder,sum=0;
	    cin>>N;
        while(N>0)
    {
        if(N%10>0)
        {
           reminder=N%10;
           if(reminder%2==1 && reminder!=9 && reminder!=1)
           {
               sum+=reminder;
           }
           if(reminder==2)
           {
               sum+=reminder;
           }
           
        }
        N=N/10;
    } 
    cout<<sum<<endl;
  } 
    return 0; 
 }       