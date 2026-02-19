#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    //정답 형태: 선물 가능한 학생의 최대 명수
    //선택 대상: 모든 학생
    //검사 조건: 정렬 후, 쿠폰을 i번째 학생에게 쓴다고 가정했을 때 예산 B 안에서 몇 명까지 가능한지

    sort(P,P+N);
    int answer=-1;

    for(int i=0; i<N; i++){
        int sum=0;
        int count=0;
        for(int j=0; j<N; j++){
            if (j == i) sum += P[j] / 2; 
            else sum+=P[j];
            if(sum>B) {
                break;
            }
            count++;
        }
        answer=max(answer,count);
    }

    cout << answer;

    return 0;
}