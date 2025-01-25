#include<bits/stdc++.h>
using namespace std;
int main(){
	int w=0,s=0,n,t[110];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	sort(t+1,t+1+n);
	for(int i=1;i<=n-1;i++){
		w+=i;
		s+=w;
	}
	cout<<s;
	return 0;
} 
