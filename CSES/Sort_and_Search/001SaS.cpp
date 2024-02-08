#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

void solve() {
    int n, aux;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i ++) {
        cin >> aux;
        s.insert(aux);
    }

    cout << s.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}
