#include<bits/stdc++.h>
using namespace std;
int n,m,q,w,e;
string x;
char c;
bool t[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	cin>>m; 
	for(int i=1;i<=m;i++){
		cin>>q;
		if(q==1){
			cin>>e>>w;
			for(int i=n;i>=e;i--){
		       x[i]=x[i]-1;
		       x[e+1]=w;
	        }
		}
		else if(q==2){
			cin>>c;
			while(x.find(c)){
				t[x.find(c)]=0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(t[i]!=0) cout<<x[i]<<" ";
	}
	return 0;
}
