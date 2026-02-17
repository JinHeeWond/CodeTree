#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    //정답형태: 등차수열을 이루는 횟수의 최댓값 
    //선택 대상: K 
    //검사 조건: 두 숫자의 평균이 K인지

    int count;
    int ans=-1;

    for(int k=1; k<=100; k++){
        count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(((a[i]+a[j])/2)==k) count++;
            }
        }
        ans=max(ans,count);
    }

    cout << ans;

    return 0;
}