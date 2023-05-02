#include <bits/stdc++.h>

int main() {
    long long int n, count = 0;
    std::cin>>n;
    if(n>=100) {count += n/100; n -= (n/100)*100;}
    if(n>=20) {count += n/20; n -= (n/20)*20;}
    if(n>=10) {count += n/10; n -= (n/10)*10;}
    if(n>=5) {count += n/5; n -= (n/5)*5;}
    count += n;
    std::cout<<count;
    return 0;
}