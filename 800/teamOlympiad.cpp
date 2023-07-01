#include <bits/stdc++.h>

void solve() {
    int n, t, min = 9999999;
    std::vector<int> t1, t2, t3, ts;
    std::cin>>n;
    for(int i = 0; i < n; i ++) {
        std::cin>>t;
        switch (t) {
            case 1: t1.push_back(i+1); break;
            case 2: t2.push_back(i+1); break;
            case 3: t3.push_back(i+1); break;
        }
    }
    ts.push_back(t1.size());
    ts.push_back(t2.size());
    ts.push_back(t3.size());
    for(int i = 0; i < 3; i ++) if(ts[i] < min) min = ts[i];
    std::cout<<min<<'\n';
    for(int i = 0; i < min; i ++) std::cout<<t1[i]<<' '<<t2[i]<<' '<<t3[i]<<'\n'; 
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
