// Program to print simple triangualr pattern. that is mirrored (vertically)
// example:- 
//   * * * 
//     * *  
//       *
//   for n = 3 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = n;
	while(i>0){
		int j = 0;
		int space = n - i;

		// loop to print spaces 

		while(space){
			cout << " " << " ";
			space -= 1;
		}

		// program to print star 

		while(j<i){
			cout << "*" << " ";
			j +=1;
		}
		cout << endl;
		i -= 1;

	}
}