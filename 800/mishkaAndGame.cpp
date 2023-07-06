#include <bits/stdc++.h>

void solve() {
    int n, m, c, mS = 0, cS = 0;
    std::cin>>n;
    for(int i = 0; i < n; i ++) {
        std::cin>>m>>c;
        if (m > c) mS++;
        else if(c > m) cS++;
    }
    if (mS > cS) std::cout<<"Mishka";
    else if(cS > mS) std::cout<<"Chris";
    else std::cout<<"Friendship is magic!^^";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
