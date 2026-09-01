#include <iostream>

using namespace std;

int N, M;
int w[100], v[100];
int dp[10001];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    // Please write your code here.
    dp[0]=0;

    for(int i=0; i<N; i++){
        for(int j=w[i]; j<=M; j++){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }

    cout << dp[M];

    return 0;
}
