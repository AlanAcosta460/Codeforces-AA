#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;

    string s = to_string(n / 10);
    long long int pot = s.size();
    if(s != "0") pot++;
    
    long long int counter = 9 * pot, aux = pow(10, pot) - 1, l = aux / 9;

    while (aux > n) {
        counter--;
        aux -= l;
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
