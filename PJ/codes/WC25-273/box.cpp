#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main(){
	while(1){
		long long tot=0,cnt=1,aa=6,b=6;
		for(int i=1;i<=6;i++) cin>>a[i];
		if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==a[6]&&a[6]==0) break;
		for(int i=1;i<=6;i++){
			tot=tot+a[i]*i*i;
			if(tot>36){
				tot=0;
				cnt++;
			}
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
