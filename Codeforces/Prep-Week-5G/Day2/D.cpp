#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;

    vector<int> a(n), aux;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        x = a[i];
        aux = a;
        aux.erase(aux.begin() + i); 

        int tot = 0;
        for (int j = 0; j < n - 1; j++) tot ^= aux[j];
        
        if (tot == x) {
            cout << x << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}