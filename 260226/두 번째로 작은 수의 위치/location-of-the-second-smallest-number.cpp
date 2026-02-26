#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int min=100000;
    int min2=100000;
    int index=0;
    int cnt2=0;

    for(int i=1; i<=n; i++){
        if(a[i]<min){
            min2=min;
            cnt2=0;
            min=a[i];
        }else if(a[i]<min2 && a[i]>min) {
            min2=a[i];
            cnt2=1;
            index=i;
        }else if(a[i]==min2)cnt2++;
    }

    if(cnt2==1) cout << index;
    else cout << -1;

    return 0;
}