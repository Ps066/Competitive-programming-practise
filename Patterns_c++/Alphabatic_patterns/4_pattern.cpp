// Program to print simple pattern with equal number of rows and columns
// but each of the column and row will have different alphabets 

// example:- 
//   A B C
//   D E F
//   G H I
//   3 rows and 3 columns
// The goal is to make it for n columns 


// Note(Very Imp) :- 

// Here logic used by me is that at every row if we see corresponding element is
// being incremented by n times example at (1,1) its 1 but at (2,1) is 4 
// that is ( j + 4 ) some how as j is reponsile for columnar change.

// our goal was to upgarde the value without taking an extra int (to be efficient)
// so for each row we are using i to increase the impact of n (when added to j)

// so our equation is >>> i*n + j 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<n){
			cout << (char) (65 + i*n+j) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}