#include <iostream>
#include <map>
using namespace std;

map<long long, long long> mem;

long long fibMem(long long n) {
    if (n <= 1) return 1;
    if (mem[n] != 0) return mem[n];
    return mem[n] = fibMem(n - 1) + fibMem(n - 2);
}

int main() {
    for (int i = 0; i < 50; i++)
        cout << fibMem(i) << ' ';
    cout << endl;
    return 0;
}
