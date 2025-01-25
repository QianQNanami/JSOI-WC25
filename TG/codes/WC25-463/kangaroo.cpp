#include<bits/stdc++.h>
using namespace std;
const int maxn=5e4+5;
int n;
int num[maxn*2];
int max_num=-0x3f3f3f3f;
bool check(int x){
	if(4*x<=max_num) return true;
	return false;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	int v;
	for(int i=1;i<=n;i++){
		cin>>v;
		num[v*2]++;
		max_num=max(max_num,v*2);
	}
	int ans=0;
	bool flag=0;
	for(int i=1;i<=ceil(max_num/2.0);i++){
		if(num[i]==0) continue;
		if(check(i)&&!(flag)){
			flag=1;
			num[i+1]+=num[i];
			num[i]=0;
			continue;
		}
		else if(num[i]<=num[i*2]){
			ans+=num[i];
			num[i]=0;
			num[i*2]=0;
			
		}
		else{
			ans+=num[i*2];
			num[i+1]+=num[i];
			num[i+1]-=num[i*2];
			num[i]=0;
			num[i*2]=0;
		}
		flag=0;
	}
	cout<<ans;
	return 0;
}
