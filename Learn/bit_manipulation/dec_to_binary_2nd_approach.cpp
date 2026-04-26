// Program to find binary of a decimal number 
// most important logic

// basic explainantion 
// we are bringing all the ith position value at 0th position
// (at LSB) and then doing AND operation with 1 to print the bits if they are 1
// and bits which are 0 will be printed 0, 


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i =10; i>=0;--i){  // starting with 10 going to zero.
        cout << ((n>>i)&1);
    }
}


// solved example 

// Step-by-Step Example:

// If num = 5 (binary: 0000000101 in an 11-bit representation):

//     Start with i = 10:
//         num >> 10 shifts all bits 10 places to the right, resulting in 0.
//         0 & 1 extracts the LSB: 0. Print 0.

//     i = 9:
//         num >> 9 shifts all bits 9 places to the right, resulting in 0.
//         0 & 1 extracts the LSB: 0. Print 0.

//     ...

//     i = 2:
//         num >> 2 shifts bits 2 places to the right, resulting in 1 (0001).
//         1 & 1 extracts the LSB: 1. Print 1.

//     i = 1:
//         num >> 1 shifts bits 1 place to the right, resulting in 10 (0010).
//         10 & 1 extracts the LSB: 0. Print 0.

//     i = 0:
//         num >> 0 shifts bits 0 places to the right, resulting in 101 (0101).
//         101 & 1 extracts the LSB: 1. Print 1.