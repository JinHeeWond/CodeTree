#include <iostream>
#include <cstdlib> 

using namespace std;

int n, m;
int grid[20][20];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int ans=0;

    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            for(int k=0; k<n; k++){
                int gold=0;
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        if(abs(i-r)+abs(j-c)<=k){
                            gold+=grid[i][j];
                        }
                    }
                }
                int cost=k*k+(k+1)*(k+1);
                if(gold*m>=cost){
                    ans=max(ans,gold);
                }
            }
        }
    }

    cout << ans;

    return 0;
}
