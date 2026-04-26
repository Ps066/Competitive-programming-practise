// Program to print simple pattern with equal number of rows and columns
// having numbers on each rows 

// example:- 
//   1 2 3
//   4 5 6
//   7 8 9
//   3 rows and 3 columns, where each colum and each row has different
// number The goal is to make it for n columns 


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
		int j = 1;
		while(j<=n){
			cout << i*n + j << " ";
			j += 1;
		}
		cout << endl;
		i += 1;

	}
}