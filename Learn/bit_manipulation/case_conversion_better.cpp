#include<bits/stdc++.h>
using namespace std;


//function to convert the case to lower using bit manipulation
void to_lower(char a){
	cout << (char) (a| ' ');
}

// function to convert to capital case using bit manipulation 
void to_Upper(char a){
	cout << (char) (a & '_');
}



int main(){
	char a;
	cin >> a;
	to_lower(a);
	to_Upper(a);
	return 0;
}


//logic 

// 1) for conversion to lower case 
// We know in Captial case the 5th bit is always UNSET and if 
// we managed to SET the first bit we will get lower case of the
// same character

// to SET the 5th bit if we try to do OR operation with a number whoes
// only 5th bit is set then we will be getting our 5th bit SET 

// example :- 

// <our_number> | 000100000 => will set 5th bit of our number
// we also know,


// (1<<5) = 000100000 
// that can also be written as 

// 2**5 = (1<<5) = 000100000

// therefore any cahacter whoes ascii value is 32 will be the one with which we need 
// to perform OR operation in oreder to SET fifth BIT, and such a character is "SPACE"

// Therefore any number when ORRED with SPACE character then it is converted to lower case


// 2) for conversion to Upper case 
// We know in Captial case the 5th bit is always UNSET and if 
// we managed to UNSET the fifth bit we will get Upper case of the
// same character

// to UNSET the 5th bit if we try to do AND operation with a number whoes
// only 5th bit is UNSET then we will be getting our 5th bit UNSET 

// we know that our Character are maximuly occoupying only 7 bits to store the character
// a character has a size of 1 byte where usually MSB is 0
// and hence we have to make a mask
// that has 7 bits where all the bits are 1 execpt the 5th bit that will be zero

// Such a mask will look like this 1011111 (only 5th bit is zero)
// if we perform AND operation of our number with such a mask we will UNSET the 5th bit


// example :- 

// <our_number> & 1011111 => will UNSET 5th bit of our number
// we also know,


// if we convert 1011111 to decimal we get 95 as value 

// therefore any cahacter whoes ascii value is 95 will be the one with which we need 
// to perform AND operation in oreder to UNSET fifth BIT, and such a character is "_" (UNDERSCORE)

// Therefore any number when AND with '_' character then it is converted to Capital case