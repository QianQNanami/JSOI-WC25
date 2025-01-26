#include<bits/stdc++.h>
using namespace std;
int a[10];
bool flag;
int main(){
	while(1){
		flag = 0;
		for(int i = 0; i < 7; i++){
			cin >> a[i];
			if(a[i]) flag = 1;
		}
		
		if(!flag) return 0;
		cout << 1 << "\n";
	}
	return 0;
}
