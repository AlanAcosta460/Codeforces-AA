#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2== 1) {
        cout << "NO" << endl;
        return;
    }

    string ans = "AA";
    n -= 2;
    while (n > 0) {
        ans += "BAA";
        n -= 2;
    }

    if (n < 0) ans.erase(ans.begin() + ans.size() - 1);
    cout << "YES" << endl << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
