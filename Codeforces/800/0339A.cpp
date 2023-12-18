#include <bits/stdc++.h>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<int> out;
    for (int i = 0; i < s.length(); i ++) {
        if (i % 2 == 0) out.push_back(int(s.at(i)) - 48);
        else continue;
    }
    sort(out.begin(), out.end());
    s.clear();
    for (int x : out) {s.append(std::to_string(x)); s.append("+");}
    s.pop_back();
    std::cout<<s;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
