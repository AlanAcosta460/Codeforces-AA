#include <bits/stdc++.h>

int main() {
    int n, a, b, count = 0, min = 0;
    std::cin>>n;
    for (int i=0; i<n; i++) {std::cin>>a>>b; count+=b-a; if(count>min) min=count;}
    std::cout<<min;
    return 0;
}