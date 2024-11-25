// Program to print simple pattern with equal number of rows and columns
// but each of the column and row will have different alphabets 

// example:- 
//   A B C
//   B C D
//   C D E
//   3 rows and 3 columns
// The goal is to make it for n columns 

// Imp note :-  i have used a logic of adding i and j while they are starting from 0 
// this will ensure the shift seen in the problem

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<n){
			cout << (char) (65+j+i) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}