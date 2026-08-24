#include <iostream>

using namespace std;

int n;
int sequence[1000];
int dp[1000];
int dp2[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    // Please write your code here.
    int ans=0;

    for(int i=0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(sequence[i]>sequence[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }

    for(int i=n-1; i>=0; i--){
        dp2[i]=1;
        for(int j=i+1; j<n; j++){
            if(sequence[i]>sequence[j]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }

    for(int i = 0; i < n; i++){
        ans = max(ans, dp[i] + dp2[i] - 1);
    }

    cout << ans;

    return 0;
}
