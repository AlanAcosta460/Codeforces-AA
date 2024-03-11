#include <bits/stdc++.h>
using namespace std;

vector<int> b, c;
map<int, int> mp;

int forms(int rem) {
    int counter = 0;
    if (mp[rem] > 0) return mp[rem];
    for (auto aux2 : c) if (aux2 <= rem) counter++;
    mp[rem] = counter;
    return counter;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    mp.clear();
    b.assign(n, 0);
    c.assign(m, 0);
    for (auto &aux : b) cin >> aux;
    for (auto &aux : c) cin >> aux;
    
    int rem = 0, counter = 0;
    for (auto aux1 : b) {
        rem = k - aux1;
        counter += forms(rem);
    }
    
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
