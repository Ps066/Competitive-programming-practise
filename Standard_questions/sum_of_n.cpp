//program to print sum of n natural numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum=0;
	for(int i = 1; i<=n;i++){
		sum += i;
	}
	cout << sum;
}