#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        string result = S;

        // Iterate through the string to find and replace the leftmost occurrence of "110" with "100"
        for (int i = 0; i <= N - 3; ++i) {
            if (S[i] == '1' && S[i + 1] == '1' && S[i + 2] == '0') {
                result[i] = '1'; // Replace the first '1' with '1'
                result[i + 1] = '0'; // Replace the second '1' with '0'
                result[i + 2] = '0'; // Replace the '0' with '0'
                break; // Break the loop after the first replacement
            }
        }

        cout << result << endl;
    }

    return 0;
}

