#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, count = 1;
    int maximal = INT_MIN;

    while (n != 0) {
        cin >> n;

        if (n > maximal) {
            maximal = n;
        }

        else if (n == maximal)
            count += 1;
    }

    cout << count;

    return 0;
}