#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    // floor(a/b) = (a-a%b)/b
    // a % b = {0, 1, 2, ..., b-1}
    
    ll A, B, N, x, ans;
    cin >> A >> B >> N;
    
    if(N >= B-1) {
        x = B-1;
    }else{
        x = N;
    }
    
    ans = A*(x%B)/B;
    
    cout << ans << endl;
    
    return 0;
    
}
