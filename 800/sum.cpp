#include <bits/stdc++.h>

void solve() {
    int a, b, c;
    std::cin>>a>>b>>c;
    if (a == b + c) std::cout<<"YES\n";
    else if (b == a + c) std::cout<<"YES\n";
    else if (c == a + b) std::cout<<"YES\n";
    else std::cout<<"NO\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
