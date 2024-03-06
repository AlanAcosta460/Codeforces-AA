#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> ps(n + 1);
    ps[0] = 0;
    int aux;
    
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        ps[i] = ps[i - 1] + aux;
    }

    vector<long long> q(n - k + 1);
    int i = 0;
    for(auto &x : q) {
        x = ps[k + i] - ps[i];
        i++;
    }

    cout << (min_element(q.begin(), q.end()) - q.begin() + 1) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
