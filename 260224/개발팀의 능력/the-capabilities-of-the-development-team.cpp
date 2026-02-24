#include <iostream>
#include <algorithm>

using namespace std;

int arr[5];

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    //정답형태: 최대 능력의 팀과 최소 능력의 팀 간의 최소 능력 차이
    //선택대상: 5명의 개발자
    //검사조건: 2명,2명,1명으로 팀을 짜서 개발자 선택해서 능력치를 고려함, 만약 능력치가 같게 나오면 -1출력

    int ans=1e9;

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=0; k<5; k++){
                for(int l=k+1; l<5; l++){
                    if(i==k || i==l || j==k || j==l) continue;

                    int team1=arr[i]+arr[j];
                    int team2=arr[k]+arr[l];

                    int m=10-i-j-k-l;
                    int team3=arr[m];

                    if(team1==team2 || team2==team3 || team1==team3) continue;

                    int mn=max({team1,team2,team3});
                    int mm=min({team1,team2,team3});

                    ans=min(ans,mn-mm);
                }
            }
        }
    }
        if(ans == 1e9) cout << -1;
        else cout << ans;
    

    return 0;
}