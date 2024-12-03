// this program checks if the given number is power of two
// this is basic approach and it can be improved 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
    for(int i=0;i<=n/2;i++){
            if(n == (1<<i)){
                return true;
            }
        }
        return false;
}


//logic 
// Binary for 0 is:- 00000000000    
// Binary for 1 is:- 00000000001    2^0
// Binary for 2 is:- 00000000010    2^1
// Binary for 3 is:- 00000000011
// Binary for 4 is:- 00000000100    2^2
// Binary for 5 is:- 00000000101
// Binary for 6 is:- 00000000110
// Binary for 7 is:- 00000000111
// Binary for 8 is:- 00000001000    2^3
// Binary for 9 is:- 00000001001
// Binary for 10 is:- 00000001010


// therfore for each time we perform 1<<i we get powers of 2 , that is starting from i=0.