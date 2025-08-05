#include <bits/stdc++.h>
using namespace std;

void flush() {
    cout.flush();
}

bool check_response() {
    string res;
    cin >> res;
    return res != "-1";
}

void solve_case(long long n) {
    // First, use digit to shrink x
    cout << "digit" << endl;
    flush();
    if (!check_response()) return;

    // Try more digit if n is very large
    if (n > 1000) {
        cout << "digit" << endl;
        flush();
        if (!check_response()) return;
    }

    // Try brute force multiplier 1..100
    for (long long guess = 1; guess <= 100; guess++) {
        if (n % guess == 0) {
            long long mult = n / guess;
            cout << "mul " << mult << endl;
            flush();
            if (!check_response()) return;
            break;
        }
    }

    // Confirm
    cout << "!" << endl;
    flush();
    string res;
    cin >> res;
    if (res == "-1") exit(0);  // Interactor says wrong
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        solve_case(n);
    }

    return 0;
}
