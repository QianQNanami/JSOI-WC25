#include<bits/stdc++.h>
using namespace std;
int a[10005],f,r,n,t,sum,aa=1,oio;
struct p{
	int s;
	int x;
};
p q[10005];
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		r=r+1;
		cin>>a[i];
		q[r].s=a[i];
		q[r].x=i;
	}
	sort(a+1,a+n+1);
	oio=q[t].s;
	for(int i=1;;i++)
	{
		if(q[f++].s!=a[aa]){
			
			r=(r+1)%n;
			q[r].s=q[f++].s;
			f=(f+1)%n;
			sum++;
		}
		else{
			aa++;
			f=(f+1)%n;
			sum++;
			if(q[f++].s==oio&&q[f++].x ==t){
			cout<<sum;
			return 0;}
		}
	}
	return 0;
} 
