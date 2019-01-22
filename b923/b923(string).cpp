#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int stack[100001];
	int sp = 0;
	while(n--){
		int o;
		cin >> o;
		if(o == 1){
			sp--;
		}else if(o == 2){
			cout << stack[sp - 1] << endl;
		}else{
			cin >> stack[sp];
			sp++;
		}
	}
	return 0;
} 
