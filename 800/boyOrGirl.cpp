#include <bits/stdc++.h>

int main() {
    std::string userName, abc = "abcdefghijklmnopqrstuvwxyz";
    int count = 0;
    std::getline(std::cin, userName);
    for (int i = 0; i < userName.length(); i ++) {
        for (int j = 0; j < abc.length(); j ++) {
            if (userName[i] == abc[j]) {count ++; abc.erase(remove(abc.begin(), abc.end(), userName[i]), abc.end());}
        }
    }
    if (count % 2 == 0) std::cout << "CHAT WITH HER!";
    else std::cout << "IGNORE HIM!";

    return 0;
}