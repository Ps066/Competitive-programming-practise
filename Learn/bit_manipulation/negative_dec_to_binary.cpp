#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if the number is negative
    if (n < 0) {
        int absValue = -n;  // Convert negative number to positive (absolute value)
        int ans = 0;
        int i = 0;

        // Finding the binary representation of the absolute value
        while (absValue != 0) {
            int digit = absValue & 1; // Get the LSB
            ans = (digit * pow(10, i)) + ans; // Construct the binary representation
            absValue = absValue >> 1; // Right shift
            i++;
        }

        // Finding the one's complement (invert bits)
        int ones_complement = ~ans;

        // Add 1 to get the two's complement
        int twos_complement = ones_complement + 1;

        // Output the two's complement binary representation
        cout << "Binary representation of " << n << " in two's complement is: " << twos_complement << endl;

    } else {
        int ans = 0;
        int i = 0;

        // Finding the binary representation of a positive number
        while (n != 0) {
            int digit = n & 1; // Get the LSB
            ans = (digit * pow(10, i)) + ans; // Construct the binary representation
            n = n >> 1; // Right shift
            i++;
        }

        // Output the binary representation of the positive number
        cout << "Binary representation of " << n << " is: " << ans << endl;
    }

    return 0;
}
