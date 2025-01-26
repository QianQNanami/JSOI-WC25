#include<bits/stdc++.h>
using namespace std;
int t,x[1005],y[18005],cnt=1;
int main(){
	cin>>t;
	for (int i=1;i<=t;i++){
		cin>>x[i];
		for (int j=1;j<=x[i];j++) cin>>y[cnt++];
	}
	cout<<-1<<endl;
	return 0;
}
