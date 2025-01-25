#include <bits/stdc++.h>
using namespace std;
queue<int>x;
int main(){
	int a,b[200005],d;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}
	cin>>d;
	for(int i=1;i<=d;i++){
		for(int j=1;j<=i;j++){
			int c[200005];
			cin>>c[i];
		}
		if(b[i]==1){
			q.find(b[2]);
			q.push(b[3]);
		}
		if(b[i]==2){
			q.pop(b[2]);
		}
	}
	cout<<b;
	return 0;
}
