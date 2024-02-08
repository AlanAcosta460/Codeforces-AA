#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q, aux;
    cin >> n >> q;

    vector<long long int> x(n + 1, 0);
    x[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> aux;
        x[i] = x[i - 1] + aux;
    }
    
    int a, b;
    while (q--) {
        cin >> a >> b;
        cout << x[b] - x[a - 1] << endl;
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
