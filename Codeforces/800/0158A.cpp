#include <iostream>
using namespace std;

int main() {
    int n, k, a[100], tot = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[i + 1] || a[n - 1] >= a[k - 1]) if (a[i] >= a[k - 1] && a[i] != 0) tot ++;
        else break;
    }
    cout << tot; 
    return 0;
}