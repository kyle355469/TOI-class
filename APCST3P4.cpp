#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int p[50000], n;

int a(int d){
	int nb = 0, r = -1;
	for(int i = 0; i < n; i++){
		if(p[i] > r){
			nb++;
			r = p[i] + d;
		}
	}
	return nb;
}
int main() {
	int k, i, lb, ub, m;
	cin >> n >> k;
	for(i = 0; i < n; i++){
		cin >> p[i];
	}
	sort(p, p + n);
	lb = 0, ub = p[n - 1] - p[0];
	while(lb < ub){
		m = (lb + ub) / 2;
		if(k < a(m)){
			lb = m + 1;
		}else{
			ub = m;
		}
	}
	cout << lb << '\n';
}
