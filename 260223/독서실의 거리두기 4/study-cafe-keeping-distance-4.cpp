#include <iostream>
#include <string>

using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;

    // Please write your code here.
    int best = 0;

    for(int i=0; i<N; i++){
        if(seat[i]=='1') continue;
        for(int j=i+1; j<N; j++){
            if(seat[j]=='1') continue;

            int prev=-1;
            int mindist=10000;
            for(int k=0; k<N; k++){
                if(seat[k]=='1'|| k==i || k==j){
                    if(prev!=-1){
                        int dist=k-prev;
                        if (dist < mindist) mindist = dist;
                    }
                    prev=k;
                }
            }
              if (mindist > best) best = mindist;
        }
    }

    cout << best;

    return 0;
}