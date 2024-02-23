#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, aux, maxNIndex, minMIndex;
    cin >> n >> m;

    vector <vector <int>> v(n);
    vector <int> min(n); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            cin >> aux;
            v[i].push_back(aux);
        }
    }

    for (int i = 0; i < n; i++) min[i] = *min_element(v[i].begin(), v[i].end());
    maxNIndex = max_element(min.begin(), min.end()) - min.begin();
    minMIndex = min_element(v[maxNIndex].begin(), v[maxNIndex].end()) - v[maxNIndex].begin();
    cout << v[maxNIndex][minMIndex] << endl;
}   

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}

/* 
buscar el mayor menor 
*/