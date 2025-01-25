#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	queue<int>a;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push(x);
	}
	while(n--){
		cout<<a.front();
		a.pop();
	}
	return 0;
}
