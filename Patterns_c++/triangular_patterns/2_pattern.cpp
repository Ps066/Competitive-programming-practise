// Program to print simple triangualr pattern.
// example:- 
//   1 
//   2 2 
//   3 3 3

//   for n = 3 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = 1;
		while(j<=i){
			cout << i << " ";
			j += 1;
		}
		cout << endl;
		i += 1;
	}
}