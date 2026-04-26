// program to Toggle the ith bit of a number

#include<bits/stdc++.h>
using namespace std;

void printbinary(int n){
	for(int i =10; i>=0;--i){  // starting with 10 going to zero.
        cout << ((n>>i)&1);
    }
}

int main(){
	int n, i;  // number and the ith position
	cin >> n >> i;
	cout << "binary before Toggling ith position:- ";
	printbinary(n);
	cout << endl;

	n = (n ^ (1<<i));
	cout << "binary after Toggling ith position:- ";
	printbinary(n);

}