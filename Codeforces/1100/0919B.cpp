#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    int ans = 10, i = 1, mod = 10;
    while (k--) {
        ans += 9;
        i++;
        if (i % mod == 0) {
            ans += 9;
            i = 0;
            mod = 11;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}

// 19  28  37  46  55  64  73  82  91 100
// 109 118 127 136 145 154 163 172 181 190 199  
// 208 217 226 235 244 253 262 271 280 289 
