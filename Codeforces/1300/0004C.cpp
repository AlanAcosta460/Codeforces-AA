#include <bits/stdc++.h>
using namespace std;

map<string, int> st;

void solve() {
    string s;
    cin>>s;

    if (st.find(s) == st.end()) {
        cout<<"OK\n";
        st[s] = 1;
    } else {
        cout<<s<<st[s]<<'\n';
        st[s]++;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
