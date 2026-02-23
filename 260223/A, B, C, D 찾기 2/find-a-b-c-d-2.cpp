#include <iostream>
#include <algorithm>
using namespace std;

int nums[15];

int main() {
    for (int i = 0; i < 15; i++) cin >> nums[i];
    sort(nums, nums + 15);

    int A = nums[0];
    int total = nums[14];

    // 입력 멀티셋을 빈도 배열로 저장 (0~160)
    int base[161] = {0};
    for (int i = 0; i < 15; i++) base[nums[i]]++;

    for (int i = 1; i < 15; i++) {
        for (int j = i; j < 15; j++) {
            int B = nums[i];
            int C = nums[j];
            int D = total - A - B - C;

            if (!(A <= B && B <= C && C <= D)) continue;
            if (D < 0 || D > 40) continue; // 문제 조건 상 범위 체크

            // 이번 후보를 검사할 카운트 배열 복사
            int cnt[161];
            for (int t = 0; t <= 160; t++) cnt[t] = base[t];

            // 필요한 15개 값
            int need[15] = {
                A, B, C, D,
                A+B, B+C, C+D, D+A,
                A+C, B+D,
                A+B+C, A+B+D, A+C+D, B+C+D,
                A+B+C+D
            };

            bool ok = true;
            for (int t = 0; t < 15; t++) {
                int x = need[t];
                if (x < 0 || x > 160) { ok = false; break; }
                cnt[x]--;
                if (cnt[x] < 0) { ok = false; break; } // 입력에 없는 값을 요구한 경우
            }

            if (ok) {
                cout << A << " " << B << " " << C << " " << D;
                return 0;
            }
        }
    }

    return 0;
}