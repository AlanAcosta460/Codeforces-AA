#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    vector<int> ans;
    vector<int> aux = {10000, 1000, 100, 10};
    
    for (int i = 0; i < 4; i++) {
        if (n >= aux[i]) {
            x = (n / aux[i]) * aux[i];
            ans.push_back(x);
            n -= x;
        }
    }
    if (n != 0) ans.push_back(n);
    cout << ans.size() << '\n';
    for (int a : ans) cout << a << " ";
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
