#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> stack;
	while(n--){
		int o;
		cin >> o;
		if(o == 1){
			stack.pop_back();
		}else if(o == 2){
			cout << stack.back() << endl;
		}else{
			int x;
			cin >> x;
			stack.push_back(x);
		}
	}
	return 0;
} 
