#include<iostream>
using namespace std;
#define nl printf("\n")
typedef long long int ll;

int modExp(int a, int b, int c){
    if(b==0)
        return 1;
    return (a*modExp(a,b-1,c))%c;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	  int a,b,c;
	  cin>>a>>b>>c;
	  cout<<modExp(a,b,c)<<endl;
	}
	
	return 0;
}