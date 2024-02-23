#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long int> e1(n), e2(n - 1), e3(n - 2);
    for (auto &e : e1) cin >> e;
    for (auto &e : e2) cin >> e;
    for (auto &e : e3) cin >> e;
    
    sort(e1.begin(), e1.end());
    sort(e2.begin(), e2.end());
    sort(e3.begin(), e3.end());
   
    vector<long long int> diff;
    set_difference(e1.begin(), e1.end(), e2.begin(), e2.end(), inserter(diff, diff.end()));
    set_difference(e2.begin(), e2.end(), e3.begin(), e3.end(), inserter(diff, diff.end()));
    
    cout << diff[0] << endl << diff[1] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
