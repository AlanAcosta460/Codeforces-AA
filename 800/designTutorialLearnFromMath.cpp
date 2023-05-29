#include <bits/stdc++.h>

bool isPrime(int n) {
    if(n % 2 == 0 or n % 3 == 0) return false;
    else return true; 
}

void solve() {
    long long int n, x = 4, y, i = 1;
    std::cin>>n;
    y = n - x;  
    while(isPrime(x) or isPrime(y)){
        x++;
        y = n - x;
    } 
    std::cout<<x<<' '<<y;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
