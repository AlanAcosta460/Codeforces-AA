#include <bits/stdc++.h>

int main() {
    int k, w, count=0;
    long int n;
    std::cin>>k>>n>>w;
    for(int i=1; i<=w; i++) {count += i*k;}
    if (count > n) std::cout<<count-n;
    else std::cout << '0';
    return 0;
}