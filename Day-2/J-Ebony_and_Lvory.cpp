#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= c / a; i++)
    {
        int P = i * a;
        int Q = c - P;
        
        if (Q % b == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
