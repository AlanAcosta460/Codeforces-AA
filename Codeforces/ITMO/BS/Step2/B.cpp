#include <bits/stdc++.h>
using namespace std;

vector<double> ropes;

long long pieces(double maxLen) {
    long long counter = 0;
    for (auto a : ropes) counter += floor(a / maxLen);
    return counter;
}

void solve() {
    int n, k;
    cin >> n >> k;

    ropes.assign(n, 0);
    for (auto &a : ropes) cin >> a;
    
    double beg = 0, end = *max_element(ropes.begin(), ropes.end()), mid = 0;
    long long aux = 0, i = 100;
    while (i--) {
        mid = (beg + end) / 2;
        aux = pieces(mid);
        if (aux >= k) beg = mid;
        else end = mid;
    }

    cout << setprecision(20) << mid << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
