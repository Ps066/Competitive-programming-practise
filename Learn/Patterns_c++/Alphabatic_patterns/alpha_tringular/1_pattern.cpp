// Program to print simple pattern with same elemenst in a rows 

// example:- 
//   A 
//   B B 
//   C C C
//   3 rows 
// The goal is to make it for n columns 


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<=i){
			cout << (char) (65+i) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}