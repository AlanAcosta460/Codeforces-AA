#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 2 || n == 3) cout << "NO SOLUTION" << endl;

    vector<int> even, odd;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) even.push_back(i);
        else odd.push_back(i);
    }

    for (auto x : even) cout << x << ' ';
    for (auto x : odd) cout << x << ' ' ;
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
