#include <iostream>

using namespace std;

int n, t;
int l[200];
int r[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> l[i];

    for (int i = 0; i < n; i++) cin >> r[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    // Please write your code here.

    while(t--){
    int temp1=l[n-1];
    int temp2=r[n-1];
    int temp3=d[n-1];

    for(int i=n-1; i>0; i--){
        l[i]=l[i-1];
    }

    for(int i=n-1; i>0; i--){
        r[i]=r[i-1];
    }

    for(int i=n-1; i>0; i--){
        d[i]=d[i-1];
    }

    l[0]=temp3;
    r[0]=temp1;
    d[0]=temp2;
    }

    for(int i=0; i<n; i++){
        cout << l[i] << " ";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        cout << r[i] << " ";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        cout << d[i] << " ";
    }
    cout << endl;



    return 0;
}
