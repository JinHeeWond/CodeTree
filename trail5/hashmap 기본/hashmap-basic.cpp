#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
unordered_map<int, int> m;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "add") {
            int k, v;
            cin >> k >> v;
            // key가 이미 존재하든 없든 (k, v) 값 덮어쓰기/추가
            m[k] = v;
        } 
        else if (cmd == "remove") {
            int k;
            cin >> k;
            // key k에 해당하는 요소 삭제
            m.erase(k);
        } 
        else if (cmd == "find") {
            int k;
            cin >> k;
            // key k가 존재하면 value 출력, 없으면 "None" 출력
            if (m.find(k) != m.end()) {
                cout << m[k] << "\n";
            } else {
                cout << "None\n";
            }
        }
    }

    return 0;
}