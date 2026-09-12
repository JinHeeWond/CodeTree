#include <iostream>
#include <unordered_set>

using namespace std;

int n;
int m;
int a[100000];
int b[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Please write your code here.
    unordered_set<int> s;

    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }

    for(int i=0; i<m; i++){
        if(s.find(b[i])!=s.end()){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}
