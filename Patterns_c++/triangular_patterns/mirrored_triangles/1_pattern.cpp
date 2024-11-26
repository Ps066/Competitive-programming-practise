// Program to print simple triangualr pattern. that is mirrored (horizontlly)
// example:- 
//       * 
//     * * 
//   * * *
//   for n = 3 


// the logic is simple we will run aditional loop to print spaces 


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n){
		int j = 1;
		int space = n-i;

		// loop to print spaces
		while(space){
			cout << " " << " ";
			space -= 1;
		}

		// program for printing star
		while(j<=i){
			cout << "*" << " ";
			j +=1;
		}
		cout << endl;
		i += 1;

	}
}