// Program to print simple pattern with differnet elemenst in a rows and columns

// example:- 
//   A 
//   B C 
//   C D E
//   D E F G
//   3 rows 
// The goal is to make it for n columns 

// The logic used here is alabout using increments or rows and columns 


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<=i){
			cout << (char) (65+i+j) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}