#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    int p, output[n];
    for (int i = 0; i < n; i ++) {std::cin>>p; output[p-1] = i + 1;}
    for(int i = 0; i < n; i ++) std::cout<<output[i]<<' ';
    return 0;
}