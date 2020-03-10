#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        double a, b, sum;
        cin >> a >> b;
        sum = a + b;
        if (sum != round(sum)) cout << sum << endl;
        else cout << static_cast<int>(sum) << endl;
    }
    return 0;
}

