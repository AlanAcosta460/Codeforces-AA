#include <bits/stdc++.h>

int main() {
    long int k;
    std::string n;
    std::getline(std::cin, n, ' '); 
    std::cin>>k;
    for(int i=0; i<k; i ++) {
        if(n[n.length()-1] == '0') n.replace(n.begin(), n.end(), std::to_string(stoi(n)/10));
        else n.replace(n.begin(), n.end(), std::to_string(stoi(n)-1));
    }
    std::cout<<n;
    return 0;
}