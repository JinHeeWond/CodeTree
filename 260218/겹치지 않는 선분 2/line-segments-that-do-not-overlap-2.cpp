#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    //정답형태: 다른 선분과 겹치지 않는 선분의 수
    //검사대상: 모든 선분
    //검사조건: x1[i]>=x1[j] 이거나 x2[i]>=x2[j] 이면 continue;
    int count=0;

    for(int i=0; i<N; i++){
        bool ok=true;
        for(int j=0; j<N; j++){
            if(i==j) continue;
            if((x1[i]-x1[j])*(x2[i]-x2[j])<0){
                ok=false;
                break;
            }
        }
        if(ok) count++;
    }

    cout << count;

    return 0;
}