#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string a, b;
    int i = 2229;
    while (i--) {
        a += '5';
        b += '4';
    }

    a += '5';
    b += '5';
    
    cout << a << endl << b << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
