#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[100], b[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    // Please write your code here.
    //정답 형태: 가장 많이 나온 수 쌍의 수
    //선택 대상: M개의 (a,b)쌍 모두
    //검사 조건: 정렬된 형태로 통일해서 비교,
    //이중for문 돌면서 같은쌍이면 count++

    for(int i=0; i<m; i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }

    int maxCount = 0;

    for(int i=0; i<m; i++){
        int count=0;
        for(int j=0; j<m; j++){
            if(a[i]==a[j] && b[i]==b[j]) count++;
        }
        maxCount=max(maxCount,count);
    }

    cout << maxCount;

    return 0;
}