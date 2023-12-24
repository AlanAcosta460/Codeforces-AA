#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int n, t;
    cin >> n >> s;
    t = s.size();

    if (t > n) s = "-1";
    else for (int i = 0; i < n - t; i++) s += '0';

    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}
