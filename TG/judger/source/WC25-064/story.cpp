#include<iostream>
using namespace std;
int n,k,m,a[50005];
int op,p,v;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=m;i++){
		cin>>op;
		if(op==1){
			cin>>p>>v;
		}
		if(op==2){
			cout<<-1;
		}
	}
	return 0;
}
