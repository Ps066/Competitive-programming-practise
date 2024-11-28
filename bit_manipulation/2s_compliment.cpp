// Program to find 2's compliment  of a negative decimal number 
// most important logic



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // cout << "Enter an integer: ";
    cin >> n;

    // Handle negative numbers
    if (n < 0) {
        int absValue = -n;  // Convert negative number to positive (absolute value)

        // Find 1's complement using the NOT operator
        int ones_complement = ~absValue;

        // Calculate 2's complement by adding 1
        int twos_complement = ones_complement + 1;

        // Output the result
        cout << "The 2's complement representation of the negative number is: " << twos_complement << endl;
    } else {
        // For non-negative numbers
        cout << "The given number is non-negative: " << n << endl;
    }

    return 0;
}
