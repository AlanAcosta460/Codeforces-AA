#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int x;
    map<string, int> aliases;
    while (n--) { 
        string s, aux;
        cin >> x; 
        
        while (x--) {
            cin >> s;
            aux += s[0];
        }

        aliases[aux]++;
    }

    int counter = 0;
    for (auto [n, c] : aliases) if (c == 1) counter++;

    cout << counter << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
