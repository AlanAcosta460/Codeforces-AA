#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long int n;
    cin >> n;
    cout << n<< ' ';
    while(n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        cout <<n << ' ';
    }
}
 
 
int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
