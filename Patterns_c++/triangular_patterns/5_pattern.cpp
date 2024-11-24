// Program to print simple triangualr pattern.
// example:- 
//   1 
//   2 3
//   3 4 5 
//   4 5 6 7

//   for n = 4

// this is an improved solution of the same problem in 4_pattern.cpp
// here our goal is to avoid talking an extra variable count 


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j=0;
		while(j<i){
			cout << j + i << " ";
			j += 1;
			
		}
		cout << endl;
		i += 1 ;
	}
}



// another solution but complex logic

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i<=n){
// 		int j=0;
// 		while(j<=i-1){
// 			cout << j*1 + i << " ";
// 			j += 1;
			
// 		}
// 		cout << endl;
// 		i += 1 ;
// 	}
// }
