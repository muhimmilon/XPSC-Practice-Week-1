#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    for (int result = A; result <= B; ++result)
    {
        if (result % C == 0)
        {
            cout << result << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;

    return 0;
}