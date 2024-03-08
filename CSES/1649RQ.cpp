#include <bits/stdc++.h>
using namespace std;

const int N = 2*1e5; 

long long tree[2 * N];
long long n;
 
void build(vector <long long> arr) { 
    for (int i = 0; i < n; i++) tree[n + i] = arr[i];
    for (int i = n - 1; i > 0; --i) tree[i] = min(tree[2 * i], tree[2 * i + 1]);
}
 
void update(long long p, long long value) { 
    tree[p + n] = value;
    p = p + n;
      
    for (int i = p; i > 1; i /= 2){
        if(i % 2) tree[i / 2] = min(tree[i], tree[i - 1]);
        else tree[i / 2] = min(tree[i], tree[i + 1]);
    }
}
  
long long querry(long long l, long long r) { 
    long long res = LLONG_MAX;
    for (l += n, r += n; l < r; l /= 2, r /= 2) {
        if (l % 2) res = min(res, tree[l++]);
        if (r % 2) res = min(res, tree[--r]);
    }
      
    return res;
}

void solve() {
    long long q;
    cin >> n >> q;

    vector<long long> x(n);
    for (auto &aux : x) cin >> aux;

    build(x);

    long long op, a, b;
    while (q--) {
        cin >> op;
        cin >> a >> b;
        if (op == 1) update(a - 1, b);
        else cout << querry(a - 1, b) << endl;
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
