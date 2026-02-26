#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int ans = 0;

    for(int i=0; i<=N-3; i++){
        for(int j=0; j<=N-3; j++){
            int sum=0;

            for(int x=i; x<i+3; x++){
                for(int y=j; y<j+3; y++){
                    sum+=grid[x][y];
                }
            }

            if (sum > ans) ans = sum;
        }
    }

    cout << ans;

    return 0;
}
