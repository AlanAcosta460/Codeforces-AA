#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, i = 0;
    
    cin >> n;

    vector<int> a(n);
    set<int> s;

    for (int i = 0; i < n; i++) cin >> a[i];

    while (s.size() == i && a.size() > 0) {
        int aux = a.at(a.size() - 1);
        s.insert(aux); 
        i++;
        a.pop_back();
    }

    cout << (n - s.size()) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
