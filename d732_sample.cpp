#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, x, i, ub, lb, m, a[100001];
	cin >> n >> k;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	while(k > 0){
		cin >> x;
		lb = 1, ub = n + 1;
		while(lb < ub){
			m = (lb + ub) / 2;
			if(x > a[m]){
				lb = m + 1;
			}else{
				ub = m;
			}
		}
		if(lb <= n && a[lb] == x){
			cout << lb << '\n';
		}else{
			cout << "0\n";
		}
		k--;
	}
	return 0;
} 
