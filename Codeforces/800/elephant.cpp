#include <bits/stdc++.h>

int main() {
    int x,count=1;
    std::cin>>x;
    while (x>5) {if (x>5) {count ++; x-=5;}}
    std::cout<<count;
    return 0;
}