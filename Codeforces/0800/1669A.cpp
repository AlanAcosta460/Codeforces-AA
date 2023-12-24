#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, ans;
    cin >> r;
    if (r >= 1900) ans = 1;
    else if (r <= 1899 && r >= 1600) ans = 2;
    else if (r <= 1599 && r >= 1400) ans = 3;
    else ans = 4;
    cout << "Division " << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
