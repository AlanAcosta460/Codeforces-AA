#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, q;
    cin >> n >> q;

    vector<long long int> vec(n);
    for (auto &x : vec) cin >> x;
    
    sort(vec.begin(), vec.end());

    long long int op, k, a, b, index1, index2;
    while (q--) {
        cin >> op;

        if (op == 1) {
            cin >> k;
            
            if (!binary_search(vec.begin(), vec.end(), k)) {
                if (k > vec.back()) vec.push_back(k);
                else {
                    index1 = upper_bound(vec.begin(), vec.end(), k) - vec.begin();
                    vec[index1] = k;
                }
            }
        } else {
            cin >> a >> b;

            index1 = lower_bound(vec.begin(), vec.end(), a) - vec.begin();
            index2 = upper_bound(vec.begin(), vec.end(), b) - vec.begin();
            cout << abs(index2 - index1) << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
