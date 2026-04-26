// basic template 

// #include <bits/stdc++.h> → includes everything (fast coding)
// ios::sync_with_stdio(false); cin.tie(NULL); → fast I/O (important in contests)
// vector<int> arr(n); → dynamic, safe, standard CP usage

#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios::sync_with_studio(false);
    // cin.tie(NULL);

    int n;
    cin>> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // example : print input 
    for (int x :arr) cout << x << " ";

    return 0;
}