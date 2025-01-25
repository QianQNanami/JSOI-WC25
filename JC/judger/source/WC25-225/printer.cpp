#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,s[n],maxn=s[0],a;
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(s[i]>maxn)a=1;
		//s.push_front();
		//11s.push_back(s[0]);
	}
	cout<<a+4;
	return 0;
}
