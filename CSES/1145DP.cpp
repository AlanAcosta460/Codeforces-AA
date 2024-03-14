#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> vec;
    long long x;
    vector<long long>::iterator it;
    while (n--) {
        cin >> x;
        it = lower_bound(vec.begin(), vec.end(), x);
        if (it == vec.end()) vec.push_back(x);
        else vec[it - vec.begin()] = x;
    }

    cout << vec.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
