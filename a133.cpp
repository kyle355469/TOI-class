#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n1, n2;
	int k = 1;
	while(cin >> n1 >> n2){
	    if(n1 == 0 && n2 == 0){
	    	break;
		}
	    int a[n1], b[n2];
	    int height[n1 + 1][n2 + 1] = {};
	    for(int i = 0; i < n1; i++){
	    	cin >> a[i];
	    }
	    for(int i = 0; i < n2; i++){
	    	cin >> b[i];
	    }
	    for(int i = 1; i <= n1; i++){
	    	for(int j = 1; j <= n2; j++){
	        	if(a[i - 1] == b[j - 1]){
	          		height[i][j] = height[i - 1][j - 1] + 1;
	        	}else{
	        		height[i][j] = max(height[i][j - 1], height[i - 1][j]);
	      		}
	    	}
	  	}
	  	cout << "Twin Towers #" << k << endl << "Number of Tiles : " << height[n1][n2] << endl;
	  	k++;
	}
	return 0;
} 
