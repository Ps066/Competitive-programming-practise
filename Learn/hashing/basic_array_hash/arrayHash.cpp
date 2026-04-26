#include <bits/stdc++.h>
using namespace std;

// note in this progrm the input is as follow 
// first line takes "n" that is the number of elements of my array
// followed by second line takes "n" element inputs basically elements of array 
// thirt line takes the number i want to searc for frequency 

int main() {
    // to emonstrate the array made up of an hash
    // lets solve a problem for occurance of digit 
    // array 

    // take input of an array with j element 
    int j;
    cin >> j;
    vector<int> arr(j);
    for(int i=0;i<j;i++){
        cin >> arr[i]; // takes input of j element in one line  
    }

    // create a hash to preprocess 
    int hash[j+1] = {0}; // this creats an array named "hash" with j+1 elements where each element is 0

    // single loop to map everything in the hash 
    for(int k=0; k<j; k++){
        hash[arr[k]]++; // basically hash["array element actiong as index"]
    }

    // now we have map simply for if i want to know a number a is repeated how many times in array i can do 
    int a;
    cin >> a;

    cout << hash[a];
    return 0;

}