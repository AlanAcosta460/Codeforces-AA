#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int i = 0;
    while (i < s.size()) {
        char aux = s[i++];
        if (aux == 'H' || aux == 'Q' || aux == '9') {
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
