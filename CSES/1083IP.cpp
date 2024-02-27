#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    n--;

    vector<int> x(n, 0);
    int aux;
    while (n--) {
        cin >> aux;
        x[aux - 1] = 1;
    }
    
    vector<int>::iterator index = find(x.begin(), x.end(), 0);
    cout << index - x.begin() + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
