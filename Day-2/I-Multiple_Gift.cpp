#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long X, Y;
    cin >> X >> Y;

    int maxLength = 0;
    long long num = X;

    while (num <= Y)
    {
        num *= 2;
        maxLength++;

        if (num > Y)
            break;
    }

    cout << maxLength << endl;

    return 0;
}
