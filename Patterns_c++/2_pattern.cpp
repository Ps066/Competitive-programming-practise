// Program to print simple pattern with equal number of rows and columns
// having numbers on each rows 

// example:- 
//   1 1 1
//   2 2 2
//   3 3 3
//   3 rows and 3 columns, where each row has same number
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
			cout << i << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}