#include <bits/stdc++.h>

int main() {
    int k, r, tot, count;
    std::cin>>k>>r; 
    tot = k;
    if(k > r or r%k != 0) {
        while(tot%10 != r) {if(tot%10 == 0) break; tot += k;}
        if(tot%10 == r) {tot -= r; count = tot/k+1;}
        else count = tot/k;
    }
    else count = r/k;
    std::cout<<count;
    return 0;
}