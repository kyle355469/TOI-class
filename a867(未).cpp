#include <iostream>
#include <string>
using namespace std;


int main(){
	int dl[] = {0, 0, 1, -1, -1, 1, 1, -1};		//直 
	int ds[] = {1, -1, 0, 0, 1, 1, -1, -1};		//橫 
	char map[15][30] = {};
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 30; j++){
			cin >> map[i][j];
		}
	}
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 30; j++){
			if(map[i][j] == '.'){
				for(int k = 0; k < 8; k++){
					int r = i + dl[k];
					int c = j + ds[k];
					if(r >= 0 && r < 15 && c >= 0 && c < 30 && map[r][c] == '*'){
						map[i][j]++;
					} 
					
				}
				if(map[i][j] != '.' && map[i][j] != '*'){
					map[i][j] += '0';
					map[i][j] -= '.';
				}
			}
		}
	}
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 30; j++){
			cout << map[i][j];
		}
		cout << '\n';
	}
	return 0;
} 
