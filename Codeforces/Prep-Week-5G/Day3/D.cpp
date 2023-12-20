#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c, counter = 0;
    map<int, int> m;

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int orbit;
        cin >> orbit;
        m[orbit]++;
    }

    for (auto i : m) {
        if (i.second > c) counter += c;
        else counter += i.second;
    }

    cout << counter << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
