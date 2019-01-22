#include <iostream>
#include <string>
#include <vector>
using namespace std;

void hanoi(int n, char src, char dst, char via){
	if(n == 1){
		cout << "Move ring 1 from " << src << " to " << dst << endl;
		return;
	}
	hanoi(n - 1, src, via, dst);
	cout << "Move ring "<< n << " from " << src << " to " << dst << endl;
	hanoi(n - 1, via, dst, src);
}

int main(){
	int n;
	while(cin >> n){
		hanoi(n, 'A', 'C', 'B');
	}
	return 0;
} 
