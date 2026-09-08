#include <iostream>
#include <string>
#include <map>

using namespace std;

int n;
string words[10000];


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

    cout << fixed;
    cout.precision(4);

    for(auto const& [word,count]:m){
        double ratio = ((double)count/n)*100;
        cout << word << " " << ratio << "\n";
    }


    return 0;
}
