// Program to print simple pattern with equal number of rows and columns
// but each of the row will have same alphabets 

// example:- 
//   A A A
//   B B B
//   C C C
//   3 rows and 3 columns
// The goal is to make it for n columns 

// This method is not using any anditional variable holding the ascaii value 
// to improve and make the things more efficent we derived an equation that is
 
 // ascaii(65) + i -1

// and hence the same problem is solved in better way

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = 1;
		while(j<=n){
			cout << (char) (65+i-1) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}

}