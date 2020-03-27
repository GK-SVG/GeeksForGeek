#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)   
#define ll unsigned long int
#define len 100
int main() {

    // seive code
    
    bool prime[len+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=len; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=len; i += p) 
                prime[i] = false; 
        } 
    } 
    
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    if(n<=5) {
	        cout << pow(2,n-1) << endl;
	        continue;
	    }
	    ll factors = 1;
	    int x=1;
	    int rem=-1,temp=0;
	    
        while(rem!=0)
        {
            x *= 2; 
            rem = n/x;
            temp += rem;
        }
        //cout << temp << endl; 
        factors *= (temp+1);
	    
	    for(int i=3; i<=n; i+=2)
	    {
	        if(prime[i])
	        {
	            x=1;
	            rem=-1, temp=0;
	            while(rem!=0)
	            {
    	            x *= i; 
    	            rem = n/x;
    	            temp += rem;
    	        }
    	  //      cout << temp << endl;
    	        factors *= (temp+1);
	        }
	    }
	    
	    printf("%lu\n",factors);
	}
	return 0;
}