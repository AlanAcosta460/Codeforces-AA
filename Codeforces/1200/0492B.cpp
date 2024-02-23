#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l;
    cin >> n >> l;

    vector<double> lights(n);
    for (auto &x : lights) cin >> x;
    
    sort(lights.begin(), lights.end()); 
    double maxDistance = lights.at(0); 

    cout << fixed << setprecision(10);
    for (int i = 0; i < n - 1; i ++) { 
       double aux = (lights.at(i + 1) - lights.at(i)) / 2;
       if (aux > maxDistance) maxDistance = aux;
    }
    
    if (l - lights.at(n - 1) > maxDistance) maxDistance = l - lights.at(n - 1);

    cout << maxDistance << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
