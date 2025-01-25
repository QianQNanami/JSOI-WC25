#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
	int n,q,d,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a[n];
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>d;
		if(d==1){
			cin>>b>>c;
			a.push_back(c);
		}
		if(d==2){
			cin>>b;
			a.delete(b);
		}	 
	}
	cout<<a;
	return 0;
}
