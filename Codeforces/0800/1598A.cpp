#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string v1, v2;
    cin >> v1 >> v2;

    int i = -1;
    bool flag = false;
    while (i++ < n) {
        if (v1[i] == '1' && v2[i] == '1') {
            flag = true;
            break;
        }
    }

    cout << ((flag) ? "NO" : "YES") << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
