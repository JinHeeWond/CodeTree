#include <iostream>
#include <algorithm>

using namespace std;

int ability[6];

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }

    // Please write your code here.
    //정답 형태: 능력 총합이 가장큰팀,가장작은팀의 차
    //선택 대상: 6명의 개발자
    //검사 조건: 2명씩 3번 고른 후 차이가 적게나는걸 고름
    int best=2e9;

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            int s1=ability[i]+ability[j];
        
        for(int k=0; k<6; k++){
            if(k==i || k==j) continue;
            for(int l=k+1; l<6; l++){
                if(l==i || l==j) continue;
                int s2=ability[k]+ability[l];
            
            int m=-1;
            int n=-1;
            for(int t=0; t<6; t++){
                if(t==i || t==j || t==k || t==l) continue;
                if(m==-1)m=t;
                else n=t;
            }
            int s3=ability[m]+ability[n];

            int mx=max({s1,s2,s3});
            int mn=min({s1,s2,s3});
            best=min(best,mx-mn);
                }
            }
        }
    }

    cout << best;
    
    return 0;
}