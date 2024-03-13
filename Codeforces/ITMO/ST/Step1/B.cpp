
#include <bits/stdc++.h>
using namespace std;

vector<long long> segTree;
long long n; 

void build(vector<long long> v) {
    for (int i = 0; i < n; i++) segTree[n + i] = v[i];
    for (int i = n - 1; i > 0; i--) segTree[i] = min(segTree[2 * i], segTree[2 * i + 1]);
}

void update(long long a, long long b) {
    segTree[a + n] = b;

    for (int i = a + n; i > 1; i /= 2) {
        if (i % 2) segTree[i / 2] = min(segTree[i], segTree[i - 1]);
        else segTree[i / 2] = min(segTree[i], segTree[i + 1]);
    }
}

long long querry(long long a, long long b) {
    long long ans = LLONG_MAX;

    for (a += n, b += n; a < b; a /= 2, b /= 2) {
        if (a % 2) ans = min(ans, segTree[a++]);
        if (b % 2) ans = min(ans, segTree[--b]);
    }

    return ans;
}

void solve() {
    int m;
    cin >> n >> m;
    
    segTree.assign(3 * n, 0);
    vector<long long> vec(n);
    for (auto &v : vec) cin >> v;

    build(vec);
    
    long long op, a, b;
    while (m--) {
        cin >> op >> a >> b;

        if (op == 1) update(a, b);
        else cout << querry(a, b) << endl;
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


