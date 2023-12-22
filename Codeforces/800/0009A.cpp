#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, w;
    vector<string> aux = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cin >> y >> w;
    cout << aux.at(max(y, w) - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
