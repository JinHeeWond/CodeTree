#include <iostream>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    //정답 형태: 최소 비용 구하기
    //선택 대상: 연속한 T개의 밭
    //검사 조건: 각각을 H로 만들기 위해 올리거나 내리는 최소 비용

    int answer=10000;

    for(int i=0; i<N-T; i++){
        int cost=0;
        for(int j=0; j<T; j++){
            cost+=abs(arr[i+j]-H);
        }
        answer = min(answer, cost);
    }

    cout << answer;

    return 0;
}