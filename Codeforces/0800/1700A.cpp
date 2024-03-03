#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    long long count = 0;
    count = (m * (m + 1)) / 2;

    for (long long i = 2; i <= n; i++) count += m * i;

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
