#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < k; i++) {
        int aux = b.at(b.size() - 1);
        
        if (aux > a[0]) {
            b.pop_back();
            a.erase(a.begin());
            a.push_back(aux);
        } else break;
    }

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << endl;
}



int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
