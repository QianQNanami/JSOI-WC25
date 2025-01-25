#include<bits/stdc++.h>
using namespace std;
int v[100010],e[100010],s;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>v[i]>>e[i];
		s+=v[i];
	}
	if(s%3!=0)cout<<0<<endl;
	else{
		cout<<1<<endl;
	}
	return 0;
}

