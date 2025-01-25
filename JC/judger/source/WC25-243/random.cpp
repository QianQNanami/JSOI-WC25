#include<bits/stdc++.h>
using namespace std;
string  a;
bool mapn[1001];
int main() {
	int n,x,p,q,z,d;
	char y;
	cin>>n;
	getline(cin,a);
	cin>>x;
	for(int i=1; i<=x; i++) {
		cin>>p;
		if(p==1) {
			cin>>q>>d;
			for(int i=n; i>=q+2; i--) {
				a[i]=a[i-1];
				a[q+1]=d;
			}
		}
		else if(p==2){
			cin>>y;
			
				mapn[a.find(y)]=1;
				
		}
	}
	for(int i=1;i<=n;i++){
		if(mapn[i]!=0) cout<<a[i]<<" ";
	}
	return 0;
}

