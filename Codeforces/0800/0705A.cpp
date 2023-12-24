#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    std::cout<<"I ";
    for (int i = 1; i <= n; i ++) {if(i % 2 != 0) std::cout<<"hate "; else std::cout<<"love "; if(n > 1 && i < n) std::cout<<"that I ";}
    std::cout<<"it";
    return 0;
}