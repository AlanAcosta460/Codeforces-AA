#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string ans, ansr;

        for (char c : s) if (isalnum(c)) ans += tolower(c);

        ansr = ans;
        reverse(ansr.begin(), ansr.end());

        return (ans == ansr) ? true : false; 
    }
};