#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    //출력형태: 최댓값과 최솟값의 차이중 K이하가 되는 최대 숫자 개수
    //선택대상: N개의 수
    //검사조건: N개의 수들을 정렬한 후 arr[j]-arr[i]>3이되면 break 그전까진 count++
    
    int ans=0;
    int count=0;

    sort(arr,arr+N);

    for(int i=0; i<N; i++){
        int count=0;
        for(int j=i; j<N; j++){
            if(arr[j]-arr[i]<=K){
                count++;
            }else{
                break;
            }
        }
        ans = max(ans, count);
    }

    cout << ans;


    return 0;
}