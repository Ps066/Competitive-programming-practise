// Program to print simple pattern with equal number of rows and columns
// having numbers on each rows 

// example:- 
//   3 2 1
//   3 2 1
//   3 2 1
//   3 rows and 3 columns, where each column has same number
// The goal is to make it for n columns 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = n;
		while(j>0){
			cout << j << " ";
			j -= 1;
		}
		cout << endl;
		i += 1;
	}
}