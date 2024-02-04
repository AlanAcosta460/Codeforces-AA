#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a;
    cin >> a;

    double aux = 0, n = 3;
    
    while (n < 10000) {
        aux = 180 - 360 / n;
        if (aux == a) break;
        n++;
    }

    if (aux == a) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
