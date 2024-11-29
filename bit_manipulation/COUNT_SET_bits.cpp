// program to UNSET the ith bit of a number

#include<bits/stdc++.h>
using namespace std;

void printbinary(int n){
	for(int i =10; i>=0;--i){  // starting with 10 going to zero.
        cout << ((n>>i)&1);
    }
}

int main(){
	int n;  // number
	int ctr = 0;
	cin >> n;
	cout << "binary of the number is:- ";
	printbinary(n);
	cout << endl;

	for(int i=31;i>=0;--i){   // looping from 31 to 0 (total 32 bits)
		if((n & (1<<i)) != 0){
			ctr ++;
		}
	}

	cout << ctr;


}