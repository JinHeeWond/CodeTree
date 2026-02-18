#include <iostream>

using namespace std;

int n;
int l[10], r[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    // Please write your code here.
    //정답형태: 서로 다른 가짓수
    //선택대상:N개중 3개의 선분을 선택해서 제거
    //검사조건:r[i]>=l[j] && r[j]>=l[j]이면 겹침
    int ans=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                bool ok=true;

                for(int a=0; a<n; a++){
                    if(a==i || a==j || a==k) continue;
                    for(int b=a+1; b<n; b++){
                        if(b==i || b==j || b==k) continue;

                        if(r[a]>=l[b] && r[b]>=l[a]){
                            ok=false;
                            break;
                        }
                    }
                }
                if(ok)ans++;
            }
        }
    }

    cout << ans;

    return 0;
}