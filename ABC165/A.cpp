#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    int K, A, B;
    cin >> K >> A >> B;
    
    for(int i = A; i <= B; i++){
        if(i % K == 0){
            cout << "OK" << endl;
            return 0;
        }
    }
    
    cout << "NG" << endl;
    
    return 0;
    
}
