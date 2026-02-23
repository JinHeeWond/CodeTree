#include <iostream>
#include <algorithm>

using namespace std;

int nums[15];

int main() {
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    sort(nums,nums+15);
    int A=nums[0];
    int total = nums[14];

    for(int i=1; i<15; i++){
        for(int j=i; j<15; j++){
            int B=nums[i];
            int C=nums[j];
            int D=total-A-B-C;
            if(!(A<=B && B<=C && C<=D)) continue;

           int need1 = A + B;
            int need2 = A + C;
            int need3 = A + B + C;

            bool ok1 = false, ok2 = false, ok3 = false;

            for (int t = 0; t < 15; t++) {
                if (nums[t] == need1) ok1 = true;
                if (nums[t] == need2) ok2 = true;
                if (nums[t] == need3) ok3 = true;
            }

            if (!ok1 || !ok2 || !ok3) continue;

            cout << A << " " << B << " " << C << " " << D;
            return 0;
        }
    }
}