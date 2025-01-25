#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,time=0;
	cin>>n>>t;
	queue<int> q;
	int a[n],b[n];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++){
		cin>>a[i];
		q.push(a[i]);
		if(t==i){
			b[i]=i;
		}
	}
	while(1){
		int max=0;
		for(int i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
				a[i]=-1;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=max){
				time++;
				q.pop();
				q.push(a[i]);
			}else if(a[i]!=-1){
				time++;
				if(b[i]){
					cout<<time;
				}else{
					q.pop();
				}
			}
		}
	}
	return 0;
}
