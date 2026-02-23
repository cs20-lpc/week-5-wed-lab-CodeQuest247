#include <iostream>
using namespace std;

// This function calculates the Ackermann value using recursion (when a function calls itself)
// It takes two unsigned integers m and n
// It returns an unsigned long long (because values can get very big)
unsigned long long ackermann(unsigned int m, unsigned int n) {

    // Case 1: If m is 0
    // According to the Ackermann definition:
    // A(0, n) = n + 1
    if (m == 0) {
        return n + 1;  // This returns n + 1
    }

    // Case 2: If m is greater than 0 AND n is 0
    // According to the definition:
    // A(m, 0) = A(m - 1, 1)
    else if (n == 0) {
        // We call the function again (recursion)
        // We reduce m by 1 and set n to 1
        return ackermann(m - 1, 1);
    }

    // Case 3: If m > 0 AND n > 0
    // According to the definition:
    // A(m, n) = A(m - 1, A(m, n - 1))
    else {
        // First, calculate A(m, n - 1)
        // Then plug that result into A(m - 1, result)
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {

    // Declare two unsigned integers for input (unsigned integers cannot be negative)
    unsigned int m, n;

    // Ask the user to enter values
    cout << "Enter m and n: ";

    // Store user input into m and n
    cin >> m >> n;

    // Print the result of the Ackermann function
    cout << "Ackermann(" << m << ", " << n << ") = "
         << ackermann(m, n) << endl;

    return 0;  // End of program
}

// 0 0 = 1 <-case 1
// 1 0 = 2 <-case 2 
// 1 1 = 3 <-case 3 

// A(1,1) becomes A(0, A(1,0)) because of case 3 
// A(1,0) becomes A(0,1) because of case 2 
// A(0,1) becomes 2 because of case 1 
// When we substitute the result back in....
// A(1,1) becomes A(0,2)
// and then A(0,2) is computed in case 1 
// and gives us the result of 3 

// when inputing 2 0, the Ackerman gives us 3 because.....
// when it computes A(2,0) it goes into case 2 and the result...
// becomes A(1, 1). Then A(1,1) goes into Case 3 which gives the result...
// of A(0, A(1,0))
// A(1,0) goes into case 2 again and gives us A(0,1)...
// A(0,1) goes into case 1 and gives us the result 2 
// so now we assign the result A(0,2) to A(1,1)...
// so then we compute A(0,2) in case one and that will gives us..
// result of 3 










/*
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
    */ 
