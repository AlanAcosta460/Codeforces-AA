#include <bits/stdc++.h>

int main() {
    int maxMinutes = 240, n, k, count = 0;
    std::cin>>n>>k;
    maxMinutes -= k;
    for(int i = 1; i <= n; i++) {if(maxMinutes-(5*i) >= 0) {maxMinutes -= 5*i; count++;}}
    std::cout<<count;
    return 0;
}