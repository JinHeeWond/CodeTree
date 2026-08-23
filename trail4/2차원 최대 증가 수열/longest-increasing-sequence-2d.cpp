#include <iostream>

using namespace std;

int n, m;
int grid[50][50];
int dp[50][50];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int ans=0;
     dp[0][0]=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            for(int x=0; x<i; x++){
                for(int y=0; y<j; y++){
                    if(dp[x][y] > 0 && grid[x][y]<grid[i][j]){
                        dp[i][j]=max(dp[i][j],dp[x][y]+1);
                    }
                }
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;

    return 0;
}
