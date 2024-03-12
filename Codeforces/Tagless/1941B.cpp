#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (auto &aux : a) cin >> aux;
    
    for (int i = 1; i < (n - 1); i++) {
        a[i] -= a[i - 1] * 2;
        a[i + 1] -= a[i - 1];
        a[i - 1] = 0;

        if (a[i] < 0 || a[i + 1] < 0) {
            cout << "NO" << endl;
            return;
        }
    }

    for (auto aux : a) if (aux != 0) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
