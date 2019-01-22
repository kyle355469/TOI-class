#include <iostream>
#include <string>
using namespace std;

string pr(string in, string po){
	if(po.size() <= 1){
		return po;
	}
	int left = in.find(po[po.size() - 1]);
	int right = po.size() - left - 1;
	return po[po.size() - 1] + 
		   pr(in.substr(0, left), po.substr(0, left)) +			
		   pr(in.substr(1 + left), po.substr(left, right));
}

int main(){
	string po, in;
	while(cin >> in >> po){
		cout << pr(in, po) << endl;
	}
	return 0;
}
