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
    dp[0]=0;

    for(int i=1; i<=m; i++){
        dp[i]=10000;
    }

        for(int j=0; j<n; j++){
            for(int i = m; i >= A[j]; i--){
                if(dp[i-A[j]]==10000) continue;
                dp[i]=min(dp[i],dp[i-A[j]]+1);
            }
        }


    int ans=dp[m];
    if(ans==10000) ans= -1;

    cout << ans;

    return 0;
}
