#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, a[20];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[0];
	for(int i = 1; i < n; i++){
		cout << " " << a[i];
	}cout << '\n';
	int lb = lower_bound(a, a + n, 60) - a;
	if(lb == 0){
		cout << "best case\n";
	}else{
		cout << a[lb - 1] << '\n';
	}
	if(lb == n){
		cout << "worst case\n";
	}else{
		cout << a[lb] << '\n'; 
	}
	return 0;
} 
