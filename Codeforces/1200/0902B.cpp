#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;

    vector<int> p(n+1), c(n+1);
    vector<int> colors(n+1, 0);

    for (int i = 2; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) if (c[i] != c[p[i]]) colors[i] = c[i];
    for (int i = 1; i <= n; i++) if (colors[i] != 0) ans++;
    
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
