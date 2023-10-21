#include <bits/stdc++.h>
 
void solve() {
    int n, k, l, c, d, p, nl, np;
    std::vector<int> v;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    v.push_back((k * l) / nl);
    v.push_back(c*d);
    v.push_back(p/np);
    sort(v.begin(), v.end());
    std::cout<<v[0]/n;
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}