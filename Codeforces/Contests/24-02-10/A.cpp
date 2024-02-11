#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    map<char, int> m;
    for (auto ch : s) m[ch]++;

    int counter = 0;
    for (auto [k, v] : m) counter += v + 1;

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
