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
    int B=nums[1];
    int C=nums[2];
    int D=nums[14]-A-B-C;

    cout << A << " " << B << " " << C << " " << D;

    return 0;
}