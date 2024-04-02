#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    bool hasLetter[26] = {false};

    for (char c : S) {
        hasLetter[c - 'a'] = true;
    }

    // Find the first letter that does not occur
    for (int i = 0; i < 26; ++i) {
        if (!hasLetter[i]) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }

    // If all letters occur, print "None"
    cout << "None" << endl;

    return 0;
}