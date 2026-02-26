#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    //정답 형태: 행복한 수열의 개수
    //선택 대상: 행 수열 N개 + 열 수열 N개
    //검사 조건:그 수열 안에 같은 값이 연속으로 M개 이상인 구간이 ‘존재’하면” 그 행/열을 1개로 count++
    int count=0;
    bool happy;

    for(int i=0; i<n; i++){
        int run=1;
        happy=false;
        for(int j=1; j<n; j++){
            if(grid[i][j]==grid[i][j-1])run++;
            else run=1;

            if(run>=m) happy=true;
        }
        if(happy)count++;
    }

    for(int i=0; i<n; i++){
        int run=1;
        happy=false;
        for(int j=1; j<n; j++){
            if(grid[j][i]==grid[j-1][i])run++;
            else run=1;

            if(run>=m) happy=true;
        }
        if(happy)count++;
    }

    cout << count;

    return 0;
}
