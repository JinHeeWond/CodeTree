#include <iostream>

using namespace std;

int n;
int arr[100000];
int dp[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    dp[0]=arr[0];
    int ans=dp[0];

    for(int i=1; i<n; i++){
        dp[i]=max(arr[i],dp[i-1]+arr[i]);
        ans=max(ans,dp[i]);
    }

    cout << ans;

    return 0;
}
