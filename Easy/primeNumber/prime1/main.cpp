#include <iostream>
using namespace std;

int main() {
    int cases=1;
    cout<<"Enter number of cases";
    cin>>cases;
    while (cases)
    {
        int m,n;
        int count=0;
        cout<<"enter first no.:";
        cin>>m;
        cout<<"enter second number:";
        cin>>n;
        for(int i=m;i<=n;i++){
            for (int j = 1; j <=i ; j++) {
                if(i%j==0)
                 count++;
            }
            if(count==1 || count<=2)
                cout<<" "<<i;
            count=0;
        }
        cout<<"\n";
        cases--;
    }
    return 0;
}