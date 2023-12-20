#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> unique(n, 0);
    unordered_set<int> s;

    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        unique[i] = s.size();
    }

    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << unique[l - 1] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) solve();
}