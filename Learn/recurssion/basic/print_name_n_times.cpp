// Program to print name n times using recurssion
// example:- 
//     


#include<bits/stdc++.h>
using namespace std;

// function to recursively print name 'n' times
void printName(int i,int n){
    if(i>n) return;
    cout << "prashant" << endl;
    printName(i+1,n);
}

int main(){
    // input number of times 'n'
    int n;
    cin >> n;
    printName(1,n);
    return 0;
}