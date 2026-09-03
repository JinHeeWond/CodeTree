#include <iostream>

using namespace std;

int n;
int arr[100];
int dp[100001];
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    // Please write your code here.
    int target=sum/2;

    dp[0]=1;

    for(int i=0; i<n; i++){
        for(int j=target-arr[i]; j>=0; j--){
            if(dp[j]){
                dp[j+arr[i]]=true;
            }
        }
    }

    int best=0;
    for(int j=target; j>=0; j--){
        if(dp[j]){
            best=j;
            break;
        }
    }

    cout << sum - 2 * best;

    return 0;
}
