#include <iostream>
#include <string>
#include <map>

using namespace std;

int n;
string words[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Please write your code here.
    map<string,int> m;

    for(int i=0; i<n; i++){
        m[words[i]]++;
    }

    for(auto x:m){
        cout << x.first << " " << x.second << "\n";
    }
    

    return 0;
}
