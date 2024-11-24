// Program to print simple pattern with equal number of rows and columns
// but each of the column will have same alphabets 

// example:- 
//   A B C
//   A B C
//   A B C
//   3 rows and 3 columns
// The goal is to make it for n columns 


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i =1;
	while(i<=n){
		int j = 1;
		while(j<=n){
			cout << (char) (65+j-1) << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}