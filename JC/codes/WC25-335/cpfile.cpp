#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,ans=0;
	cin>>a;
	int b[1005];
	for(int i=0;i<a;i++)
		cin>>b[i];
	sort(b,b+a);
	int c=a;
	for(int i=0;i<a;i++){
		c--;
		ans+=(b[i]*(c));
	}
	cout<<ans<<endl;
	return 0;
}

