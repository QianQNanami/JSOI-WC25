#include<bits/stdc++.h>
using namespace std;
const int N=100005;
const int M=1e8;
struct node{
	int l,r,s;
};
node t[4*N];
int num[N],a[M];
int n,ans;
queue<int>q;
void build(int p,int x,int y){
	t[p].l=x,t[p].r=y;
	if(x==y){
		t[p].s=num[x];
		return;
	}
	int mid=(x+y)/2;
	build(p*2,x,mid),build(p*2+1,mid+1,y);
	t[p].s=t[p*2].s+t[p*2+1].s;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	build(1,1,n);
	for(int i=1;i<=2*n;i++){
		if(a[t[i].s]==1){
			q.push(t[i].s);	
		}
		a[t[i].s]++;
	}
	while(!q.empty()){
		int x=q.front();
		q.pop();
		if(x==2)ans++;
		else{
			ans+=(x-2)*(x-1);
		}
	}
	cout<<ans;
	return 0;
}
