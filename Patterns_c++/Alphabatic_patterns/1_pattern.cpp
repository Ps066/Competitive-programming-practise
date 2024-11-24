// Program to print simple pattern with equal number of rows and columns
// but each of the row will have same alphabets 

// example:- 
//   A A A
//   B B B
//   C C C
//   3 rows and 3 columns
// The goal is to make it for n columns 

// This method is requiring use of an anditional variable holding the ascaii value 
// to improve and make the things more efficent refer the next file 
// the same problem is solved in better way

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int c = 65;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<n){
			cout << (char) c << " ";
			j += 1;
		}
		cout << endl;
		c += 1;
		i += 1;
	}

}