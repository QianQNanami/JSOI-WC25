#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
	int n,t,a[1000],m,maxn,min;
	cin>>n>>t;
	for(int i=0;i<n;i++) q.push(i);
	for(int i=0;i<n;i++){
		cin>>m;
		a[i]=m;
	}
	while (true){
		int flat=1;
		for(int i=0;i<n;i++){
			maxn=0;
			if(a[i]>maxn) maxn=i;
		while(maxn--){
			q.push(q.front());
		}
		q.pop();
		min+=1;
		for(int i=0;i<n;i++){
			if(q[i]==0) int flat=0;
		}
		if(flat==1) break;
	}
}
	cout<<min;
	return 0;
}
