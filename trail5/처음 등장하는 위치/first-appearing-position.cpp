#include <iostream>
#include <map>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    map<int,int> m;

    for(int i=0; i<n; i++){
        if(m.count(arr[i])==0){
            m[arr[i]]=i+1;
        }
    }

    for(auto x:m){
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}
