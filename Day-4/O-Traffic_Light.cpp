#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        int min_time = n;
        int current_pos = 0;

        // Find the position of the first occurrence of green light
        while (s[current_pos] != 'g') {
            current_pos++;
        }

        // Calculate the minimum time to cross the road
        for (int i = 0; i < n; ++i) {
            if (s[current_pos] == 'g') {
                // If the current light is green, we can cross immediately
                min_time = min(min_time, i);
            }
            // Move to the next position considering the circular nature of the string
            current_pos = (current_pos + 1) % n;
        }

        cout << min_time << endl;
    }

    return 0;
}
