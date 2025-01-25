#include<bits/stdc++.h>
using namespace std;
struct Node{
	int last,data,next;
};
int x,y,n,q,k;
Node a[1000005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].data;
	}
	cin>>q;
	while(q--){
		cin>>k;
		if(k==1){
			cin>>x>>y;
			bool f=0;
			int w,d;
			for(int i=1;i<=n;i++){
				if(a[i].data==y){
					f=1;
					w=i;
				}
				if(a[i].data==x){
					d=i;	
				}
			}
			if(f==1){
				a[d].next=w;
				a[w].last=d;
			}
			else{
				a[++n].data=y;
				a[d].next=n;
				a[n].last=d;
			}
		}
		if(k==2){
			cin>>x;
			int d;
			for(int i=1;i<=n;i++){
				if(a[i].data==x){
					d=i;
					break;
				}
			}
			a[a[d].last].next=a[d].next;
			a[a[d].next].last=a[d].last;
			a[d].last=0;a[d].next=0;a[d].data=-114514;
		}
	}
	int cnt;
	for(int i=1;i<=n;i++){
		if(a[i].last==0&&a[i].next!=0){
			cnt=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[cnt].data<<" ";
		a[cnt].data=-114514;
		cnt=a[cnt].next;
		if(a[cnt].next==0){
			cout<<a[cnt].data<<" ";
			a[cnt].data=-114514;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i].data!=-114514){
			cout<<a[i].data;
			break;
		}
	}
	return 0;
}
