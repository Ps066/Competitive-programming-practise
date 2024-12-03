//programto find binary of n natural numbers 

#include <bits/stdc++.h>
using namespace std;

void find_bin(int n){
    for(int i=10;i>=0;--i){
        cout << ((n>>i)&1);
    }
}

int main()
{
    for(int i=0;i<=10;i++){
        cout << "Binary for " << i << " is:- ";
        find_bin(i);
        cout << endl;
    }
}


