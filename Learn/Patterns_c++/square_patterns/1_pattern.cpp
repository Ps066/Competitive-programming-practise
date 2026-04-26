// Program to print simple pattern with equal number of rows and columns

// example:- 
//   * * *
//   * * *
//   * * *
//   3 rows and 3 columns
// The goal is to make it for n columns 

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i = 0;
  while(i<n){
    int j = 0;
    while(j<n){
      cout << "*" << " ";
      j += 1;
    }
    i += 1;
    cout << endl;
  }
  
}