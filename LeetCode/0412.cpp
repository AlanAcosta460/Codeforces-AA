#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        map<int, string> rules = {{3, "Fizz"}, {5, "Buzz"}};

        for (int i = 1; i <= n; i++) {
            string aux = "";
            for (auto rule : rules) if (i % rule.first == 0) aux += rule.second;
            if (aux != "") ans.push_back(aux);
            else ans.push_back(to_string(i));
        }   

        return ans;
    }
};