// Program to check if ith bit is set in a binary number 
// most important logic



#include<bits/stdc++.h>
using namespace std;


int main(){
	int n = 10;  // initilized a variable
    int i =0;  // initilaized a ith position

    if((n & (1<<i) != 0)){
        cout << "Set";
    }else{
        cout << "Unset";
    }
}