#include <iostream>
#include <string>
using namespace std;

string po(string pr, string in){
	if(pr.size() <= 1){
		return pr;
	}
	int left = in.find(pr[0]);
	return po(pr.substr(1, left), in.substr(0, left)) +
		   po(pr.substr(1 + left), in.substr(1 + left)) +
		   pr[0];
}

int main(){
	string pr, in;
	while(cin >> pr >> in){
		cout << po(pr, in) << endl;
	}
	return 0;
} 
