#include <iostream>

using namespace std;

int main() {
    cout << "Prime numbers in the range from 1 to 100 are:\n";

    for (int i = 1; i <= 100; ++i) {
        int divisors = 0;

        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                divisors++;
            }
        }

        // A prime number has exactly two divisors: 1 and itself
        if (divisors == 2) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
