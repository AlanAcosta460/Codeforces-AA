#include <bits/stdc++.h>
using namespace std;

void solve() {  
    int n, u, v, ans = 0;
    cin >> n;
    vector<vector<int>> graph(n+1);
    for (int i = 0; i < n-1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }
    for (int i = 1; i <= n; i++) if (graph[i].size() == 1) ans++;
    cout << (ans + 1) / 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) solve();
}