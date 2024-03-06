#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> vec(n);
    for (auto &x : vec) cin >> x;

    vector<long long> ps(n + 1);
    ps[0] = 0;

    for (int i = 1; i <= n; i++) ps[i] = vec[i - 1] ^ ps[i - 1];
    
    int a, b;
    while (q--) {
        cin >> a >> b;
        cout << (ps[b] ^ ps[a - 1]) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
