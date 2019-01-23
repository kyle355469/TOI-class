#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n , k;


int binary (int arr[], int t, int last, int ser){
	if(arr[last / 2 + 1] == ser){
		return last / 2 + 1;
	}else if(arr[last / 2 + 1]  > ser){
		t = last / 2 + 1;
		return binary(arr, t, last, ser);
	}else if(arr[t / 2 + 1] < ser){
		last /= 2;
		last++;
		return binary(arr, t, last, ser);
	}
	return 0;
}

int main(){
	cin >> n >> k;
	int arr[n];
	//vector <int> arr;
	int ser[k];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < k; i++){
		cin >> ser[i];
	}
	for(int i = 0; i < k; i++){
		cout << binary(arr , 0, n,ser[i]) << endl;
	}
	return 0;
} 
