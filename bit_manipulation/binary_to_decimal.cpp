// Program to find decimal of a binary number 
// most important logic



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int ans = 0;   // initilized a variable
    int i =0;  // initilaized a counter

    while(n != 0){
        int digit = n % 10;    // it takes the Last digit

        if(digit == 1){               
            ans = ans + pow(2,i);  // this multiplies with 2 power i
        }
        
        n = n / 10; // shifting the digits 
        i++;
    }
    cout << ans;
}