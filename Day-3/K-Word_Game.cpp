#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
	int n;
	cin >> n;
	map<string, int> mp;
	string s[3][n];
	for (int i = 0; i < 3; i++)
    {
		for (int j = 0; j < n; j++)
        {
			cin >> s[i][j];
			mp[s[i][j]]++;
		}
	}
	for (int i = 0; i < 3; i++)
    {
		int p = 0;
		for (int j = 0; j < n; j++)
        {
			if (mp[s[i][j]] == 1) {p += 3;}
			else if (mp[s[i][j]] == 2) {p++;}
		}
		cout << p << ' ';
	}
	cout << '\n';
}

int main()
{
	cin.tie(NULL);
	int r;
    cin >> r; for
    (int i = 1; i <= r; i++)
    {
        solve();
        }

    return 0;
}