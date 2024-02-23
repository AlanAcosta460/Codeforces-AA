#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int aux = abs(b - c) + c - 1;
    if ((a - 1) < aux) cout << '1' << '\n';
    else if ((a - 1) > aux) cout << '2' << '\n';
    else cout << '3' << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
