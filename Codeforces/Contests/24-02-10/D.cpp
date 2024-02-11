#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    map<string, int> names;
    while (n--) {
        cin >> s;
        names[s]++;
        
        if (names[s] > 1) cout << s << names[s] - 1;
        else cout << "OK";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
