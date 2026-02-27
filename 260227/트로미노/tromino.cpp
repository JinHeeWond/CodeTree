#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int dr[6][3] = {
        {0,0,0},   // 가로 일자
        {0,1,2},   // 세로 일자
        {0,1,1},   // L └
        {0,1,1},   // L ┌
        {0,0,1},   // L ┘
        {0,0,-1}   // L ┐
    };
    int dc[6][3] = {
        {0,1,2},
        {0,0,0},
        {0,0,1},
        {0,0,-1},
        {0,1,0},
        {0,1,1}
    };

    int ans=0;

    for(int r=0; r<n; r++){
        for(int c=0; c<m; c++){
            for(int k=0; k<6; k++){
                 int sum=0;
                 bool ok=true;
                for(int t=0; t<3; t++){
                    int nr=r+dr[k][t];
                    int nc=c+dc[k][t];

                    if(nr<0 || nr>=n || nc<0 || nc>=m){
                        ok=false;
                        break;
                    }
                    sum+=grid[nr][nc];
                }
                if (ok && sum > ans) ans = sum;
            }
        }
    }

    cout << ans;

    return 0;
}
