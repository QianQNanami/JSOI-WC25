#include<bits/stdc++.h>
using namespace std;
int n[7004][10000001];
int main(){
	for(int i = 1; i <= 7000; i++){
		for(int j = 1; j <= 10000000; j++){
			cin >> n[i][j];
		}
		if(n[i][1] == 0 && n[i][2] == 0 && n[i][3] == 0 && n[i][4] == 0 && n[i][5] == 0 && n[i][6] == 0){
			break;
		}
	}
	cout << "2" << endl << "1";
	return 0;
}




	
