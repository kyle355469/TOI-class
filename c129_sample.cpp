#include <iostream>
#include <string>
using namespace std;

int m, n;
string g[100];

int deposit(int i, int j){
	int dl[] = {0, 0, 1, -1, -1, 1, 1, -1};		//直 
	int ds[] = {1, -1, 0, 0, 1, 1, -1, -1};		//橫 
	if(g[i][j] != '@')
		return 0;
	g[i][j] = '*';
	for(int k = 0; k < 8; k++){
		int r = i + dl[k];
		int c = j + ds[k];
		if(r >= 0 && r < m &&
		   c >= 0 && c < n)
		   deposit(r, c);
	}
	return 1;
} 

int main(){
	int i, j, nd;
	while(cin >> m >> n, m){
		for(i = 0; i < m; i++){
			cin >> g[i];
		}
		nd = 0;
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				nd += deposit(i, j);
			}
		}
		cout << nd << endl;
	}
}
