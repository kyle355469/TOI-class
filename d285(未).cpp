#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n > 0){
		vector <char> math;
		char k;
		while(cin >> k){
			if(k == EOF){
				break;
			}else if(k == '('){
				math.push_back(k);
			}else if(k >= '0' && k <= '9'){
				cout << k << " ";
			}else if(k == '+' || k == '-'){
				for(int i = 0; i <= math.size(); i++){
					if(math.back() == '*' || math.back() == '/'){
						cout << k << " ";
						break;
					}else if(math.back() == '+' || math.back() == '-'){
						cout << math.back() << " ";
						math.pop_back();
					}
				}
				math.push_back(k);
			}else if(k == '*' || k == '/'){
				for(int i = 0; i <= math.size(); i++){
					if(math.back() == '-' || math.back() == '+' || 
					   math.back() == '*' || math.back() == '/'){
						cout << math.back() << " ";
						math.pop_back();
					}
				}
				math.push_back(k);
			}else if(k == ')'){
				for(int i = 0; i <= math.size(); i++){
					if(math.back() != '('){
						cout << math.back() << " ";
						math.pop_back();
					}else{
						math.pop_back();
					}
				}
			}
			for(int i = 0; i < math.size(); i++){
				cout << math.back();
				math.pop_back();
			}
		}
		n--;
	}
	return 0;
} 
