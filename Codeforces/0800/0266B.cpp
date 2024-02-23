#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    string queue;

    cin >> n >> t;
    cin >> queue;

    for( int i = 0; i < t; i ++) {
        for (int j = 0; j < n; j++) {
            if (queue[j] == 'B' && queue[j + 1] == 'G') {
                queue[j] = 'G'; 
                queue[j+1] = 'B'; 
                j++;
            }    
        }
    }

    cout << queue;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    //std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
