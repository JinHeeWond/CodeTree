#include <iostream>

using namespace std;

int n;
int grid[20][20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int ans=0;

    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            for(int d1=1; d1<n; d1++){
                for(int d2=1; d2<n; d2++){
                    int r2=r+d1, c2=c+d1;
                    int r3=r2+d2, c3=c2-d2;
                    int r4=r3-d1, c4=c3-d1;

                    if (r2 < 0 || r2 >= n || c2 < 0 || c2 >= n) continue;
                    if (r3 < 0 || r3 >= n || c3 < 0 || c3 >= n) continue;
                    if (r4 < 0 || r4 >= n || c4 < 0 || c4 >= n) continue;

                    int sum=0;
                    int cr=r, cc=c;

                    for(int i=0; i<d1; i++){
                        sum+=grid[cr][cc];
                        cr++; cc++;
                    }

                    for(int i=0; i<d2; i++){
                        sum+=grid[cr][cc];
                        cr++; cc--;
                    }
                    
                    for(int i=0; i<d1; i++){
                        sum+=grid[cr][cc];
                        cr--; cc--;
                    }

                    for(int i=0; i<d2; i++){
                        sum+=grid[cr][cc];
                        cr--; cc++;
                    }

                    ans = max(ans, sum);
                }
            }
        }
    }

    cout << ans;

    return 0;
}
