#include <iostream>
#include <map>
using namespace std;

int main(){
    int m, n, k; //長度 斷落數 極限
    cin >> m >> n >> k;
    map<int, int> ask;
    int count = 0;
    for(int i = 0; i < n; i++){
        int st, ed;
        cin >> st >> ed;
        st -= 1;
        ed -= 1;
        for(int j = st; j <= ed; j++){
            ask[j] += 1;
            if(ask[j] == k) count++;
        }
    }
    cout << count;
} 
