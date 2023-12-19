#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    int counter = 0;

    cin >> x;

    while (x > 0) {
        counter += x & 1;
        x >>= 1;
    }

    cout << counter << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
