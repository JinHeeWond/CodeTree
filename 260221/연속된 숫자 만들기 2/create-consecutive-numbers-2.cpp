#include <iostream>

using namespace std;

int pos[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> pos[i];

    // Please write your code here.
    //정답 형태: 연속된 수가 되기 위한 최소 이동 횟수
    //선택 대상: 3명의 사람중 양 끝 사람
    //검사 조건: pos[0]과 pos[2]를 선택했을 때 pos[1]과 차이가 2 이상인지 확인하고 그 사이값을 선택후 정렬후 연속된건지 확인

    if(pos[2]-pos[1]==1 && pos[1]-pos[0]==1) cout << 0;
    else if((pos[2]-pos[1]==2 && pos[1]-pos[0]==1) ||(pos[2]-pos[1]==1 && pos[1]-pos[0]==2)) cout << 1;
    else cout << 2;

    return 0;
}