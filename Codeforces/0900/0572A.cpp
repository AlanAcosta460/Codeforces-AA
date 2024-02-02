#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

void solve() {
    int nA, nB;
    cin >> nA >> nB;

    int k, m;
    cin >> k >> m;

    vector<int> A(nA), B(nB);
    for (auto &x : A) cin >> x;
    for (auto &x : B) cin >> x;

    if (A.at(k - 1) < B.at(nB - m)) cout << "YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}
