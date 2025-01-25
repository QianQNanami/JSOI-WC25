#include<bits/stdc++.h>
using namespace std;
int check(int a){
	for(int i=2;i<a;i++)
		if(a%i==0)
			return 1;
	return 0;
}
int main(){
	int ans=0,m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i==1)
			continue;
		if(i==2)
			ans++;
		else
			if(check(i)==0)
				ans++;
	}
	cout<<ans<<endl;
	return 0;
}

