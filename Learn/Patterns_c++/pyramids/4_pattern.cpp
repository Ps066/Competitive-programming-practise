// Program to print simple triangualr pattern.
// example:- 
//         1 
//       1 2 1
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
//   for n = 4

//Hard problem but important

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int i = 1;
  while(i<=n){

    // program to print space 
    int space = n-i;
    while(space){
      cout << " " << " ";
      space -= 1; 
    }

    //program to print number
    int j = 1;
    while(j<=i){
      cout << j << " ";
      j += 1;
    }

    // program to print 3rd triangle 
    int start = i-1;
    while(start){
      cout << start << " ";
      start -= 1;
    }



    cout << endl;
    i += 1;
  }
}