#include <iostream>

using namespace std;

int N, M;
int coin[100];
int dp[10001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    // Please write your code here.
     dp[0] = 0;

    for(int i=1; i<=M; i++){
        dp[i] = 10000;
        for(int j=0; j<N; j++){
            if(i>=coin[j]){
                if(dp[i-coin[j]]==10000) continue;
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
            }
        }
    }
    int ans = dp[M];
    if(ans==10000) ans=-1;

    cout << ans;

    return 0;
}
