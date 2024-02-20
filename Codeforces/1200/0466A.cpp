#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n, m, a, b;
    cin >> n >> m >> a >> b;

    double mbPrice = b / m;
    int aux, sum = 0, left;
    if (mbPrice <= a) {
        aux = n / m;
        sum = aux * b;
        left = n - (aux * m);

        if (b < left * a) sum += b;
        else sum += left * a;
    } else sum = n * a;

    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
