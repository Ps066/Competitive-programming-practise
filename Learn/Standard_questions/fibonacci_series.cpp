//program to print fibonacci series

// 0 1 1 2 3 5 8 13 ....

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int a = 0;
	int b = 1;
	cout << a << " " << b << " ";

	for(int i = 0; i<n-2;i++){
		int nexnum = a + b;
		cout << nexnum << " ";
		a = b;
		b = nexnum;
	}
}