#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int fib(int n);
int main() {

    return 0;
}
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int i = 0;
    int j = 1;
    int k = 1;


    while (n - 2) {
        int tmp = j;
        k = (k + j) % 1000000007;
        j = (j + i) % 1000000007;
        i = tmp;
        n--;
    }

    return k;
}