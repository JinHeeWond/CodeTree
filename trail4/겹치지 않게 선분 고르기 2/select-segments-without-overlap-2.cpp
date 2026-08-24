#include <iostream>

using namespace std;

int n;
int x1[1000];
int x2[1000];
int dp[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(x1[i] > x1[j]){
            swap(x1[i], x1[j]);
            swap(x2[i], x2[j]);
        }
    }
}

    int ans=0;

    for(int i=0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(x2[j]<x1[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        ans=max(ans,dp[i]);
    }

    cout << ans;

    return 0;
}
