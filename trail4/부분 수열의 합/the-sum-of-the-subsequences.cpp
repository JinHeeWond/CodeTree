#include <iostream>

using namespace std;

int n, m;
int A[100];
int dp[10001];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    dp[0] = true;

    
    for(int i=0; i<n; i++){
        for(int j=m-A[i]; j>=0; j--){
            if(dp[j] == true) {
                dp[j + A[i]] = true;
            }
        }
    }

    if(dp[m] == true)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
