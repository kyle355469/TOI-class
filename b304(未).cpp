#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n; // >> ws
	n++;
	int k = n;
	while(n > 0){
		string word;
		string stack;
		int check = 0;
		int now = 0;
		getline(cin, word);
		for(int i = 0; i < word.size(); i++){
			//cout << now << " ";
			if(word[i] == '(' || word[i] == '['){
				//cout << 'a' << " ";
				if(now == 0){
					stack = word[i];
					now++;
				}else if(now >= 1){
					stack[now] = word[i];
					now++;
				}	
					
					//cout << stack << "     ";
			}else if(word[i] == ')'){
				//cout << 'b' << " ";
				if(now == 0){
					//cout << 'c' << " ";
					check = 1;
					break;
				}else if(stack[now - 1] == '('){
					//cout << 'd' << " ";
					now--;
				}else{
					//cout << 'e' << " ";
					check = 1;
					break;
				}
			}else if(word[i] == ']'){
				if(now == 0){
					check = 1;
					break;
				}else if(stack[now - 1] == '['){
					now--;
				}else{
					check = 1;
					break;
				}
			}
			//cout << now << endl;
			//cout << check << endl;
		}if(now != 0){
			check = 1;
		}
		//cout << endl << check << endl;
		//cout << n << " " << k << '\n';
		if(n != k){
			if(check == 0){
				cout << "Yes" << '\n';
			}else{
				cout << "No" << '\n';
			}
		}
		n--;
	}
	return 0;
} 
