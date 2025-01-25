#include<bits/stdc++.h>
using namespace std;
const int maxn=5e4+9;
int n,m,k;
int arr[maxn];
int c[maxn];
int val[33];
int lowbit(int i){
	return (i&-i);
}
void update(int i,int valu){
	while(i<=n){
		c[i]+=valu;
		i+=lowbit(i);
	}
}
int getsum(int i){
	long long res=0;
	while(i>0){
		res+=c[i];
		i-=lowbit(i); 
	}
}
int getsum(int x,int y){
	return getsum(y)-getsum(x);
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		update(i,arr[i]);
	}
	int tot=0;
	int op,op1,op2;
	while(m--){
		cin>>op;
		if(op==1){
			cin>>op1>>op2;
			op2=op2-arr[op1];
			update(op1,op2);
		}
		else{
			int ans=0x3f3f3f3f;
			memset(val,0,sizeof(val));
			for(int i=1;i<=n;i++){
				tot=0;
				for(int j=i;j<=n;j++){
					int check=getsum(i,j);
					if(check>k)continue;
					if(!val[check]){
						tot++;
						if(tot==k){
							ans=min(ans,j-i+1);
							break;
						}
					}
					val[check]++;
				}
			}
			if(ans==0x3f3f3f3f||getsum(n)<k){
				cout<<"-1"<<endl;
			}
			else{
				cout<<ans;
			}
		}
	}
	return 0;
} 
