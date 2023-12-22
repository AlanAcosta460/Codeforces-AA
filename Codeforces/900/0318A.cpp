#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, nEven, nOdd;
    cin >> n >> k;
    nEven = n / 2;
    nOdd = nEven;
    if (n % 2 == 1) nOdd++;
    if (k <= nOdd) cout << (k * 2) - 1;
    else {
        k -= nOdd;
        cout << k * 2;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}