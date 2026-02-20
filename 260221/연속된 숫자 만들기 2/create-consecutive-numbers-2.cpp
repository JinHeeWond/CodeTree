#include <iostream>
#include <algorithm>

using namespace std;

int pos[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> pos[i];

    // Please write your code here.
    sort(pos, pos + 3);

    int gap1 = pos[1] - pos[0];
    int gap2 = pos[2] - pos[1];

    if (gap1 == 1 && gap2 == 1) cout << 0;
    else if (gap1 == 2 || gap2 == 2) cout << 1;
    else cout << 2;

    return 0;
}