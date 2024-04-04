#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    int k = 0;
    int a[100001];

    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        if (b % 2 == 0)
        {
            sum += b;
        }
        else
        {
            a[k++] = b;
        }
    }

    if (k % 2 == 0)
    {
        for (int i = 0; i < k; ++i)
        {
            sum += a[i];
        }
    }
    else
    {
        sort(a, a + k, greater<int>());
        for (int i = 0; i < k - 1; ++i)
        {
            sum += a[i];
        }
    }

    cout << sum << endl;

    return 0;
}
