// program to SET the ith bit of a number

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
	cout << "binary before Setting ith position:- ";
	printbinary(n);
	cout << endl;

	n = (n | (1<<i));
	cout << "binary after Setting ith position:- ";
	printbinary(n);

}