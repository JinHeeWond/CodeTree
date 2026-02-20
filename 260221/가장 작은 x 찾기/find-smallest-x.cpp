#include <iostream>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    // Please write your code here.
    //정답형태: x중 최솟값
    //선택 대상: x
    //검사 조건: x값을 2배씩 곱한값이 ai이상 bi이하인지
    int ans=1000000;

    for(int x=1; x<=1000000; x++){
        bool ok=true;
        long long cur=x;
        for(int i=0; i<n; i++){
            cur*=2;
            if(a[i]>cur || b[i]<cur){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << x;
            return 0;
        }
    }
}