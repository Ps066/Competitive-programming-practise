// Program to print simple triangualr pattern. that is mirrored (vertically)
// example:- 
//   1 2 3 
//     2 3  
//       3
//   for n = 3 


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = n;
	while(i>0){
		int j = n-i+1;
		int space = n - i;

		// loop to print space 
		while(space){
			cout << " " << " ";
			space -= 1;
		}

		// loop to print numbers
		while(j<=n){
			cout << j << " ";
			j += 1;
		}
		cout << endl;
		i -= 1;
	}
}