#include <iostream>

using namespace std;

int n;
char c[100];
int s[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }

    // Please write your code here.
    int A=0;
    int B=0;
    int change=0;
    int prevState=2;

    for(int i=0; i<n; i++){
        if(c[i]=='A') A+=s[i];
        else B+=s[i];

        int curState=0;
        if(A>B) curState=0;
        else if(B>A) curState=1;
        else curState=2;

        if(curState!=prevState){
            change++;
            prevState=curState;
        }
    }
    cout << change;

    return 0;
}