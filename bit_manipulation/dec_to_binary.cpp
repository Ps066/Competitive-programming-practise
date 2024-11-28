// Program to find binary of a decimal number 
// most important logic



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int ans = 0;   // initilized a variable
    int i =0;  // initilaized a counter

    while(n != 0){
        int digit = n&1;    // it takes the LSB of the n and compares with 1
        ans = (digit * pow(10,i))+ans;  // structure of ans
        n = n >> 1; // shifting the bits to right 
        i++;
    }
    cout << ans;
}