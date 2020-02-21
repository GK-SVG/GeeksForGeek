#include <iostream>
using  namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N, sum = 0, count = 0;
        cin >> N;
        char *s=new char[N];
        cout << "enter a string" << endl;
        for (int i = 0; i < N; ++i) {
            cin >> s[i];
        }
        for (int i = 0; i < N; ++i) {
            sum += int(s[i]);
        }
        cout << "sum: " << sum << endl;
        for (int j = 2; j * j < sum; ++j) {
            if (sum % j == 0) {
                count++;
            }
        }
        if (count > 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
        delete[] s;
    }
    return 0;
}