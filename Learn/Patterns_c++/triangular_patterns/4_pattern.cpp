// Program to print simple triangualr pattern.
// example:- 
//   1 
//   2 3
//   3 4 5 
//   4 5 6 7

//   for n = 4

// find an improved solution of the same problem in next 5_pattern.cpp 

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	int count;
	while(i<=n){
		int j=1;
		count = i;
		while(j<=i){
			cout << count << " ";
			count += 1;
			j += 1;
			
		}
		cout << endl;
		i += 1 ;
	}
}
