#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, aux;
    cin >> n;

    priority_queue<pair<int, int>> a;
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        if (aux != 0) a.push(pair(aux, i));
    }
    
    int counter = 0;
    vector<pair<int, int>> pairs;
    
    while (a.size() > 1) {
        pair<int, int> top1 = a.top();
        top1.first--;
        a.pop();

        pair<int, int> top2 = a.top();
        top2.first--;
        a.pop();
        
        pairs.push_back(pair(top1.second, top2.second));
        if (top1.first > 0) a.push(top1);
        if (top2.first > 0) a.push(top2);
        
        counter++;
    }

    cout << counter << endl;
    if (counter != 0) for (auto p : pairs) cout << p.first << ' ' << p.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
