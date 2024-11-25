// Program to print simple pattern with differnet elemenst in a rows and columns

// example:- 
//   D
//   C D 
//   B C D
//   A B C D 
//   3 rows 
// The goal is to make it for n columns 


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i<n){
		int j = 0;
		while(j<=i){
			cout << (char) (68 - i*1 + j) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}