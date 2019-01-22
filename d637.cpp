#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int dp[101] = {};
	fill(dp + 1, dp + 101, -2e5);
	while(n > 0){
		int a, b;
		cin >> a >> b;
		for(int i = 100; i >= a; i--){
			dp[i] = max(dp[i - a] + b, dp[i]);
		}
		n--;
	}
	cout << *max_element(dp, dp + 101) << endl;
	return 0;
} 
