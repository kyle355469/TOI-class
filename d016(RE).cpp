#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string math;
	while(getline(cin, math)){
		vector <int> doing;
		for(int i = 0; i < math.size(); i++){
			if(math[i] >= '0' && math[i] <= '9'){
				doing.push_back(math[i] - '0');
			}else if(math[i] == '+' && doing.size() >= 2){
				int a = doing.back();
				doing.pop_back();
				int b = doing.back();
				doing.pop_back();
				int c = b + a;
				doing.push_back(c);
			}else if(math[i] == '-' && doing.size() >= 2){
				int a = doing.back();
				doing.pop_back();
				int b = doing.back();
				doing.pop_back();
				int c = b - a;
				doing.push_back(c);
			}else if(math[i] == '*' && doing.size() >= 2){
				int a = doing.back();
				doing.pop_back();
				int b = doing.back();
				doing.pop_back();
				int c = b * a;
				doing.push_back(c);
			}else if(math[i] == '/' && doing.size() >= 2){
				int a = doing.back();
				doing.pop_back();
				int b = doing.back();
				doing.pop_back();
				int c = b / a;
				doing.push_back(c);
			}else if(math[i] == '%' && doing.size() >= 2){
				int a = doing.back();
				doing.pop_back();
				int b = doing.back();
				doing.pop_back();
				int c = b % a;
				doing.push_back(c);
			}
			
		}
		cout << (int)doing.back() << endl;
	}
	return 0;
} 
