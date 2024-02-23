#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, odd = 0, even = 0, oddIndex = 0, evenIndex = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even++;
            evenIndex = i + 1;
        } else {
            odd++;
            oddIndex = i + 1;
        }
    }

    if (odd == 1) cout << oddIndex << endl;
    else cout << evenIndex << endl;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
