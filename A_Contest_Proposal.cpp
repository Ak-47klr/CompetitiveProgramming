#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> a, const vector<int>& b, int x) {
    int n = a.size();
    // Add x dummy problems with difficulty 0
    for (int i = 0; i < x; ++i)
        a.push_back(0);
    
    sort(a.begin(), a.end());
    
    // Remove x largest problems
    a.resize(n);

    // Now compare with b
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) return false;
    }
    return true;
}

int minimumNewProblems(int n, vector<int> a, vector<int> b) {
    for (int x = 0; x <= n; ++x) {
        if (isValid(a, b, x)) {
            return x;
        }
    }
    return n; // worst case: replace all
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        
        cout << minimumNewProblems(n, a, b) << endl;
    }
    return 0;
}
