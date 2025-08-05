#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;
        for (int i = 1; i <= 26; i++) {
            for (int j = 1; j <= 26; j++) {
                int k = s - i - j;
                if (k >= 1 && k <= 26) {
                    char c1 = 'a' + (i - 1);
                    char c2 = 'a' + (j - 1);
                    char c3 = 'a' + (k - 1);
                    cout << c1 << c2 << c3 << endl;
                    goto next_case;
                }
            }
        }
        next_case:;
    }

    return 0;
}
