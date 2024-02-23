#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> leaves;

void dfs(int node, int parent) {
    bool isLeaf = true;
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
            leaves[node] += leaves[child];
            isLeaf = false;
        }
    }
    if (isLeaf) leaves[node] = 1;
}

void solve() {
    int n, u, v, q, x, y;
    cin >> n;

    tree = vector<vector<int>>(n + 1);
    leaves = vector<int>(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1);

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << (long long) leaves[x] * leaves[y] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}