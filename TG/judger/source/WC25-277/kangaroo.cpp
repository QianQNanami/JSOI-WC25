#include<bits/stdc++.h>
using namespace std;
long long a,b[50009],ans=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b[i]; 
	} 
	sort(b,b+a);
	int x=a-1;
	for(int i=a/2-1;i>=0;i--){
		if(b[x]>=b[i]*2){
			x--;
			ans++;
		}
	} 
	cout<<ans;
	return 0;
} 
