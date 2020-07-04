#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int minArray(vector<int>& numbers);

int main() {

    return 0;
}

int minArray(vector<int>& numbers) {
    int i = 0;
    int j = numbers.size() - 1;
    int m;

    while (i < j) {
        m = (i + j) / 2; // mid point
        if (numbers[m] > numbers[j]) { // m in left
            i = m + 1;

        } else if (numbers[m] < numbers[j]) { // m in right
            j = m;

        } else { // not sure
            j--;

        }
    }

    return numbers[i];
}