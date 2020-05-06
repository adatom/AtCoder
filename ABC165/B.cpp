#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    
    ll X, ans;
    int year;
    
    cin >> X;
    ans = 100;
    year = 0;
    
    while(true){
        
        year++;
        ans = ans + ans / 100;
        
        if(ans >= X){
            cout << year;
            return 0;
        }
        
    }
    
}
