#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, n, k;
    cin >> x >> y >> n;
    k = n / x;
    if ((k * x + y) > n) k--;
    cout << (k * x + y) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}