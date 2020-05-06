#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    int ans = 0;
    
    int N, M;
    cin >> N >> M;
    
    vector<ll> H(N);
    rep(i, N){
        cin >> H[i];
    }
    
    vector<int> good(N, 1);
    
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if(H[a] > H[b]){
            good[b] = 0;
        }else if(H[a] < H[b]){
            good[a] = 0;
        }else{
            good[a] = 0;
            good[b] = 0;
        }
    }
    
    rep(i, N){
        ans += good[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
