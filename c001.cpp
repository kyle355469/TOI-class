#include <iostream>
#include <string>
using namespace std;

int main(){
	unsigned i, l;
	static int c[1001][1001] = {};
	string x, y;
	while(getline(cin, x)){
		getline(cin, y);
		for(i = 1; i <= x.size(); i++){
			for(l = 1; l <= y.size(); l++){
				if(x[i - 1] == y[l - 1]){
					c[i][l] = c[i - 1][l - 1] + 1;
				}else{
					c[i][l] = max(c[i][l - 1], c[i - 1][l]);
				}
			}
		}
		cout << c[x.size()][y.size()] << endl;
	}	
	return 0;
} 
