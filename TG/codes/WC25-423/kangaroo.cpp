#include<bits/stdc++.h>
using namespace std;
int n;
int a[40050];
priority_queue<int,vector<int>,greater<int> >q;
int ans=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) q.push(a[i]);
	for(int i=1;i<=n;i++){
		a[i]=q.top();
		q.pop();
	}
	int k;
	for(int i=n-1;i>=1;i--) if(a[i]<=a[n]/2){
		k=i;
		break;
	} 
	int i=k,j=n;
	while(j!=k&&i!=0){
		if(a[i]<=a[j]/2){
			ans++;
			i--;
			j--;
		}
		else i--;
	}
	cout<<ans;
	return 0;
}

