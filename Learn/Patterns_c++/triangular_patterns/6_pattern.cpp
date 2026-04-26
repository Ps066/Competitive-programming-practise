// Program to print simple triangualr pattern.
// example:- 
//   1 
//   2 1
//   3 2 1 
//   4 3 2 1

//   for n = 4


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = i;
		while(j>0){
			cout << j << " ";
			j -= 1;
		}
		cout << endl;
		i += 1;
	}
}