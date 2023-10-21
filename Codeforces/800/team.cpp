#include <iostream>
using namespace std;

int main() {
    int n, input, flag = 0, tot = 0; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> input; 
            if (input == 1) flag ++;
        }
        if (flag >= 2) tot ++;
        flag = 0;
    }
    cout << tot;
    return 0;
}