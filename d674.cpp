#include <iostream>
#include <string>
using namespace std;

int main(){
	unsigned i, l;
	static int c[101][101] = {};
	string x, y;
	int k = 1;
	while(getline(cin, x)){
		if (x.find('#', 0) == 0)
			return 0;
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
		cout << "Case #" << k <<  ": you can visit at most " << c[x.size()][y.size()] << " cities." << endl;
		k++;
	}	
	return 0;
}
