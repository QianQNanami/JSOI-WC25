#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int sum=0;
		for(int i=1;i<=6;i++){
			int cnt;
			cin>>cnt;
			sum+=i*i*cnt;
		}
		if(!sum) break;
		cout<<(sum-1)/36+1<<'\n';
	}
	return 0;
}
/*
0 0 4 0 0 1
7 5 1 0 0 0
0 0 0 0 0 0
*/

