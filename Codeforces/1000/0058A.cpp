#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<char> hello = {'o', 'l', 'l', 'e', 'h'};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == hello.at(hello.size() - 1)) hello.pop_back();
        if (hello.size() == 0) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
