#include <iostream>
#include <unordered_set>

using namespace std;

const int MAX_N = 100000;
int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    unordered_set<int> s;
    
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    cout << s.size();

    return 0;
}
