#include <bits/stdc++.h>

int main() {
    int a, b, different, same;
    std::cin>>a>>b;
    if(a<b) {different = a; same = (b-a)/2;}
    else {different = b; same = (a-b)/2;}
    std::cout<<different<<' '<<same;
    return 0;
}