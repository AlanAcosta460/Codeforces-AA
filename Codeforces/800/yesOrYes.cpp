#include <bits/stdc++.h>

void solve() {
    std::string s;
    std::cin>>s;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    if(s.compare("YES") == 0) std::cout<<"YES\n";
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
