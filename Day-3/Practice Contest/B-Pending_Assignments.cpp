#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X,Y,Z;
        cin >> X >> Y >> Z;

        int ttl_time = X * Y;

        if (ttl_time <= Z * 1440) // 24 * 60 = 1440
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
