#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> vec(n);
    long long aux, sum = 0;
    for (auto &a : vec) {
        cin >> aux; 
        sum += aux;
        a = aux;
    }

    aux = 0;
    long long each = sum / n;
    for (auto a : vec) {
        if ((a + aux) >= each) aux += a - each;
        else {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
