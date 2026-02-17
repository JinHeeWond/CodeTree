#include <iostream>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // Please write your code here.
    // 정답형태: 폭발할 폭탄중에 번호가 가장 큰 번호
    // 검사대상: 주어진 num전체
    // 검사 조건: num[i]와 num[j]가 똑같은 수가 있는지 본 후 없으면 continue, 있다면 거리가 3이내인지

    int count=0;
    int ans=-1;

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int distance=abs(i-j);
            if(num[i]!=num[j]) continue;
            else if(num[i]==num[j] && distance<=K){
                ans=max(ans,num[i]);
                break;
            }
        }
    }

    cout << ans;

    return 0;
}