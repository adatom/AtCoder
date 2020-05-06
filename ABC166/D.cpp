#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    int X;
    cin >> X;
    for(int A = 1; A < 1000; ++A) {
        ll A5 = 1;
        rep(i, 5) {
            A5 *= A;
        }
        for(int B = -1000; B < 1000; ++B) {
            ll B5 = 1;
            rep(i,5){
                B5 *=B;
            }
            if(A5 - B5 == X) {
                printf("%d %D\n", A, B);
                return 0;
            }
        }
    }
    return 0;
}
