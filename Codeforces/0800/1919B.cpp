#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;

    cin >> n >> s;
    
    int aux = 0;
    for (auto ch : s) {
        if (ch == '-') aux--;
        else aux++;
    }

    cout << abs(aux) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
