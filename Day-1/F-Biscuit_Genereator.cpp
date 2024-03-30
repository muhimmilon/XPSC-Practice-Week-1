#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,T;
    cin >> A >> B >> T;

    int time = (T+0.5) / A;
    int total_Bis = B * time;

    cout << total_Bis << endl;
    return 0;
}