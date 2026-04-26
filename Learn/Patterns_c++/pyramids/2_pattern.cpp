// Program to print simple triangualr pattern.
// example:- 
//         1 
//       2 2 2 
//     3 3 3 3 3 
//   4 4 4 4 4 4 4 
// 5 5 5 5 5 5 5 5 5
//   for n = 5 

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
      cout << i << " ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}