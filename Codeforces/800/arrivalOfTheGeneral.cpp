#include <bits/stdc++.h>

int main() {
    int n, line, min = 101, max = 0, minIndex, maxIndex;
    std::cin>>n;
    for(int i = 0; i < n; i++) {std::cin>>line; if(line>max) {max = line; maxIndex = i;} if(line<=min) {min = line; minIndex = i;}}
    if (maxIndex > minIndex) minIndex++;
    std::cout<<maxIndex + (n - 1 - minIndex);
    return 0;
}