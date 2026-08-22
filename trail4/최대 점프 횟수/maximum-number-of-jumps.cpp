#include <iostream>

using namespace std;

int n;
int arr[1000];
int dp[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i]=-1;
    }

    // Please write your code here.
    dp[0]=0;
    int max_len=0;

    for(int i=0; i<n; i++){
        if(dp[i]==-1) continue;
        max_len=max(max_len,dp[i]);
        for(int j=i+1; j<n; j++){
            if(j-i<=arr[i]){
                dp[j]=max(dp[j],dp[i]+1);
            }
        }
    }

    cout << max_len;

    return 0;
}
