#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int max_coins = 2 * max(A, B) - 1;
    if(A == B)
    {
        max_coins = 2 * A;
    }

    cout << max_coins << endl;

    return 0;
}
