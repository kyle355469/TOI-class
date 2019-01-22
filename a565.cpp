#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	n += 1;
	//cout << n;
	int k = n;
	//cout << k;
	while(n > 0){
		string add;
		getline(cin, add);
		int p = 0;
		int total = 0;
		for(int i = 0; i < add.size(); i++){
			if(add[i] == 'p'){
				p++;
			}else if(add[i] == 'q' && p != 0){
				total++;
				p--;
			}
			
		}
		if(n != k){
			//cout << n;
			cout << total << endl;	
		}
		n--;
	}
	return 0;
} 
