#include <bits/stdc++.h>

int main() {
    int n, p, q, count = 0;
    std::cin>>n;
    for(int i = 0; i<n; i++) {std::cin>>p>>q; if((q-p)>=2) count++;}
    std::cout<<count;
    return 0;
}