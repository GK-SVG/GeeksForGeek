#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N,M,count=0;
        cin>>N>>M;
        for (int i = N; i <=M ; i++)
        {
            if(i%2==0 && i!=2)
                continue;
            if(i%3==0 && i!=3)
                continue;
            if(i%5==0 && i!=5)
                continue;
            if(i%7==0 && i!=7)
                continue;
            for (int j = 11; j*j <i ; j++) {
                if(i%j==0)
                    count++;
            }
            if(count==0)
                cout<<i<<" ";
            count=0;
        }
        cout<<endl;
    }

    return 0;
}