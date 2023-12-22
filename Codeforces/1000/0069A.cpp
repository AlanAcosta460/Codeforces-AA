#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y, z;
    cin >> n;
    vector<int> forces(3, 0);
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        forces.at(0) += x;
        forces.at(1) += y;
        forces.at(2) += z;
    }

   if (!forces.at(0) && !forces.at(1) && !forces.at(2)) cout << "YES" << '\n';
   else cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
