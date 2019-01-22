#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n; // >> ws
	cin.ignore();
	while(n > 0){
		string word;
		vector <char> stack;
		int check = 0;
		int now = 0;
		getline(cin, word);
		for(int i = 0; i < word.size(); i++){
			if(word[i] == '(' || word[i] == '['){
				stack.push_back(word[i]);
			}else if(word[i] == ')'){
				if(stack.empty()){
					check = 1;
					break;
				}else if(stack.back() == '('){
					stack.pop_back();
				}else{
					check = 1;
					break;
				}
			}else if(word[i] == ']'){
				if(stack.empty()){
					check = 1;
					break;
				}else if(stack.back() == '['){
					stack.pop_back();
				}else{
					check = 1;
					break;
				}
			}
		}if(!stack.empty()){
			check = 1;
		}
		if(check == 0){
			cout << "Yes" << '\n';
		}else{
			cout << "No" << '\n';
		}
		
		n--;
	}
	return 0;
}
