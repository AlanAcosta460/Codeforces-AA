#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    k--;

    vector<vector<int>> a(n, vector<int>(n));
    for (auto &i : a) for (auto &j : i) cin >> j;
    
    int counter = 0;
    for (int i = 0; i < n - k; i++) 
        for (int j = 0; j < n - k; j++) 
            if (a[i][j] == a[i][j + k] && a[i][j] == a[i + k][j] && a[i][j] == a[i + k][j + k]) counter++;

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
