#include <iostream>

using namespace std;

int N;
int M[1000];
int dp[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    // Please write your code here.

    int max_len=0;

    for(int i=0; i<N; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(M[j]<M[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        max_len=max(max_len,dp[i]);
    }

    cout << max_len;

    return 0;
}

