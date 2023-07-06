#include <bits/stdc++.h>

void solve() {
    int k, n = 0; 
    std::cin>>k;
    for(int i = 0; i < k;) {n ++; if(n % 3 != 0 and n % 10 != 3) i ++;}
    std::cout<<n<<'\n';
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
