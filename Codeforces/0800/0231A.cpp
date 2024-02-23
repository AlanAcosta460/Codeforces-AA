#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, input, counter = 0, tot = 0; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> input; 
            if (input == 1) counter ++;
        }
        if (counter >= 2) tot ++;
        counter = 0;
    }
    cout << tot;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    //std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
