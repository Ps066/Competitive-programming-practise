// Program to print simple triangualr pattern.
// example:- 
//         1 
//       1 2 1
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
//   for n = 4

//Hard problem but important

// this code is incomplete 


#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int i = 1;
  while(i<=n){
    int j = 1;
    int space = n-i;

    // program to print space 
    while(space){
      cout << " " << " ";
      space -= 1; 
    }

    //program to print number
    while(j<=(2*i-1)){
      cout <<  << " ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}