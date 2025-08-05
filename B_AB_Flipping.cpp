#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ops = 0;
        for (int i = 0; i < n - 1; ) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                ops++;
                i += 2; // skip next index because we can't reuse it
            } else {
                i++;
            }
        }

        cout << ops << '\n';
    }
    return 0;
}
