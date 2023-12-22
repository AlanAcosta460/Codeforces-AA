#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, min = INT_MAX, max = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (min > x) min = x;
        if (max < x) max = x;
    }
    cout << (max - min) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
