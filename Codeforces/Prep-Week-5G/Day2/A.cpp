#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    string x, s, aux;
    
    cin >> n >> m >> x >> s;

    for (int i = 0; i < 7; i++) {
        if (x.find(s) != string::npos) {
            cout << i << "\n";
            return;
        }
        aux = x;
        x += aux;
    }

    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
