#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, counter = 0;
    cin >> x;

    int v = sqrt(x); 
    for (int i = 1; i <= v; i++) if (x % i == 0) counter++;

    counter *= 2;
    if (v * v == x) counter--;

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
