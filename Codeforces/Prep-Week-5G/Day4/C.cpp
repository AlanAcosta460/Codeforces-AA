#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y, aux, counter = 0;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        if (aux <= x) counter++;
    }
    if (counter % 2 == 0) counter /= 2;
    else counter = (counter / 2) + 1;
    if (x > y) cout << n;
    else cout << counter; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
