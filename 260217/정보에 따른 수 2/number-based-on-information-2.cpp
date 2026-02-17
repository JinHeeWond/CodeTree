#include <iostream>

using namespace std;

int T, a, b;
char c[100];
int x[100];

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
    }

    // Please write your code here.
    // 정답 형태: a,b사이에서 특별한 위치의 수
    // 검사 대상: 구간 [a, b] 안의 모든 x
    // 검사 조건: dS ≤ dN

    int count=0;

    for(int i=a; i<=b; i++){
        int minS=1000000;
        int minN=1000000;

        for(int j=0; j<T; j++){
            if(c[j]=='S') minS=min(minS,abs(x[j]-i));
            else minN=min(minN,abs(x[j]-i));
        }
        if(minS<=minN) count++;
    }
    cout << count;

    return 0;
}