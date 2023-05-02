#include <bits/stdc++.h>

int main() {
    int n;
    std::string s, abc = "abcdefghijklmnopqrstuvwxyz";
    std::cin>>n>>s;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < abc.length(); j ++) {
            if (tolower(s[i]) == abc[j]) abc.erase(remove(abc.begin(), abc.end(), tolower(s[i])), abc.end());
        }
    }
    if(abc.length()<=0) std::cout<<"YES";
    else std::cout<<"NO";
    return 0;
}