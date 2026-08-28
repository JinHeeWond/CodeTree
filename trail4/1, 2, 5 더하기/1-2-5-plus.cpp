#include <iostream>

using namespace std;

int n;
int dp[100001];

int main() {
    cin >> n;

    // Please write your code here.
    dp[0]=1;

    for(int i=1; i<=n; i++){
        if(i-1>=0){
            dp[i]+=dp[i-1];
        }

        if(i-2>=0){
            dp[i]+=dp[i-2];
        }

        if(i-5>=0){
            dp[i]+=dp[i-5];
        }

        dp[i]%=10007;
    }


    cout << dp[n];

    return 0;
}
