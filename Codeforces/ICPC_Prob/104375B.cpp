#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, l;
    cin >> n >> k >> l;
    double totalAmount = n * k;
    cout << ceil(totalAmount / l) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
