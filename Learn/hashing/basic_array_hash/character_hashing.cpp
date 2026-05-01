#include <bits/stdc++.h>
using namespace std;

// note in this progrm the input is as follow 
// first line takes "n" that is the number of elements of my array
// followed by second line takes "n" element inputs basically elements of array 
// third line takes the number i want to searc for frequency 

int main() {
    // to emonstrate the array made up of an hash
    // lets solve a problem for occurance of digit 
    // array 

    // take input of an array with j element 
    int j;
    cin >> j;
    vector<char> arr(j);
    for(int i=0;i<j;i++){
        cin >> arr[i]; // takes input of j element in one line  
    }

    // create a hash to preprocess 
    int hash[j+1] = {0}; // this creats an array named "hash" with j+1 elements where each element is 0

    // this is where it gets intresting , as we are doing character hashing we wil use ASCI
    // to find the index of any number just substract the asci code 'a' from that numbers asci code.
    // this will get us the exact index to fill on assuming (all the characters are small letters of alphabets a-z)

    // we will use type casting techinique to get the asci code 
    // int asci = a  --> this gives 97

    // now look through the character array once to store all the element in a hash 
    for(int k = 0; k<j; k++){
        int asci = arr[k]; // gets me asci of the character stored at kth position in the array 

        // get the index of the hash that should be incremented 
        int q = asci - 97;  // gives me exact index of the character in the hash

        // increment in hash the count 
        hash[q]++;   // increments the count;
    }

    // now we have map simply for if i want to know a char a is repeated how many times in array i can do 
    char a;
    cin >> a;

    // get the correcsponding index of 'a' in the hash of alphabets 
    int r = a - 97 ;


    cout << hash[r];
    return 0;

}