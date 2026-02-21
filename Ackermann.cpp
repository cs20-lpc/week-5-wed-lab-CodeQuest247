#include <iostream>
using namespace std;

// Ackermann function definition
unsigned long long ackermann(unsigned int m, unsigned int n) {
 // TODO: Complete the code.
    // Case 1: If m == 0
    if (m == 0) {
        return n + 1;
    }

    // Case 2: If m > 0 and n == 0
    else if (n == 0) {
        return ackermann(m - 1, 1);
    }

    // Case 3: If m > 0 and n > 0
    else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    unsigned int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Ackermann(" << m << ", " << n << ") = " 
         << ackermann(m, n) << endl;

    return 0;
}
