// Program to print simple pattern with equal number of rows and columns
// having numbers on each rows 

// example:- 
//   1 2 3
//   1 2 3
//   1 2 3
//   3 rows and 3 columns, where each colum has same number
// The goal is to make it for n columns 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = 1;
		while(j<=n){
			cout << j << " ";
			// Here insted of printing j if we print 'n-j+1' 
			// then we get reverse number like in pattern problem 4
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}