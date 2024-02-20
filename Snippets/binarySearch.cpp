#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int b, int e, int value) {
    int m = (b + e) / 2;

    if (b > e) return -1;
    if (v[m] > value) return binarySearch(v, b, m - 1, value);
    if (v[m] < value) return binarySearch(v, m + 1, e, value);
    if (v[m] == value) return m;
    return -1;
}

int main() {
    int i = 0; 
    vector<int> vec(50);
    for (auto &v : vec) v = i++;

    cout << binarySearch(vec, 0, 50, 26) << endl;
}
