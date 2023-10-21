#include <bits/stdc++.h>

int main() {
    int n, points, count = 0;
    std::cin>>n>>points;
    int min = points, max = points;
    for(int i = 0; i < n-1; i++) {std::cin>>points; if(points>max) {max = points; count++;} if(points<min) {min = points; count++;}}
    std::cout<<count;
    return 0;
}