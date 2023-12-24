#include <bits/stdc++.h>

void solve() {
    int a, ar[3], out = 0;
    std::cin>>a>>ar[0]>>ar[1]>>ar[2];
    for (int i = 0; i < 3; i ++) if (ar[i] > a) out++;
    std::cout<<out<<'\n';
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
