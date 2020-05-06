#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    int N, K;
    set<int> set;
    cin >> N >> K;
    
    rep(i, K){
        
        int d;
        cin >> d;
        
        rep(j, d){
            
            int a;
            cin >> a;
            set.insert(a);
            
        }
    }
    
    cout << N - set.size() << endl;
    
}
