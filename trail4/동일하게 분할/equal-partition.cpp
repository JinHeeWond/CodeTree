#include <iostream>

using namespace std;

int n;
int arr[100];
int dp[50001];
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    // Please write your code here.

    if(sum % 2 == 1) {
        cout << "No";
        return 0;
    }

    int target=sum/2;

    dp[0]=1;

    for(int i=0; i<n; i++){
        for(int j=target-arr[i]; j>=0; j--){
            if(dp[j]){
                dp[j+arr[i]]=true;
            }
        }
    }
     if(dp[target])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
