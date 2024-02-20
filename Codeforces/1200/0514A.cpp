#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    int aux;
    string ans;
    
    if (x[0] == '9') ans += '9';
    else {
        aux = int(x[0]) - 48;
        if (9 - aux < aux) ans += to_string(9 - aux);
        else ans += to_string(aux) ;
    }

    for (int i = 1; i < x.size(); i++) {
        aux = int(x[i]) - 48;
        if (9 - aux < aux) ans += to_string(9 - aux);
        else ans += to_string(aux) ;
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
