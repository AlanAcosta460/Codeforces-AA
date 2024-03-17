#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    string s, ans, sAux = "0";
    cin >> s;

    size_t leadingZeros = s.find_first_not_of('0');
    if (leadingZeros != string::npos) {
        s = s.substr(leadingZeros);
        n -= leadingZeros;
    }
    
    long long aux = 0, sumAux = 0;
    long long i = n - 1;
    for (auto ch : s) sumAux += ch - '0';
   
    if (sumAux == 0) {
        cout << 0 << endl;
        return;
    }

    while (n--) {
        sAux = to_string(sumAux + aux);
        ans += sAux.back();
        sAux.pop_back();
        sumAux -= s[i--] - '0';
        if (!sAux.empty()) aux = stoi(sAux);
        else aux = 0;
    }
    
    if (aux != 0) ans += to_string(aux);
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
