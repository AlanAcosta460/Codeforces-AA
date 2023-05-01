#include <bits/stdc++.h>

int main() {
    int n, p;
    float count = 0;
    std::cin>>n;
    for(int i = 0; i < n; i++) {std::cin>>p; count += p*100;}
    std::cout<<count/(n*100);
    return 0;
}