#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> watched(n + 1, false);

    for (int i = 1; i < n; ++i)
    {
        int epi;
        cin >> epi;
        watched[epi] = true;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!watched[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
