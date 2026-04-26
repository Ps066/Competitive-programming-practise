// Program to print simple triangualr pattern.
// example:- 
//   1 
//   2 3
//   4 5 6

//   for n = 3 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	int count = 1;
	while(i<n){
		int j =0;
		while(j<=i){
			cout << count << " ";
			j += 1;
			count += 1;
		}
		cout << endl;
		i += 1;
	}
}