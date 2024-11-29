// program to switch case using bit manipulation 

#include<bits/stdc++.h>
using namespace std;


void s_lower(char a){
	a = (a | (1<<5));
	cout << a;
}

void s_upper(char a){
	a = (a & (~(1<<5)));
	cout << a;
}


int main(){
	char n;
	cin >> n;
	s_upper(n);
	cout << endl;
	s_lower(n);
}
