#include<bits/stdc++.h>
using namespace std;
int a[100005];
vector<int>t[100005];
int n,s=0,ans=0;
int bfs(int u,int son){
	int sum=a[u];
	queue<int>q;
	q.push(u);
	for(int i=0;i<t[u].size();i++){
		if(t[u][i]==son)continue;
		sum+=a[t[u][i]];
	}
	return sum;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d%d",&a[i],%x);
		if(x)t[x].push_back(i);
		s+=a[i];
	}
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int sum1=0,sum2=0,sum3=0;
			sum1=bfs(i,j);
			sum2=bfs(j,i);
			sum3=s-sum1-sum2;
			if(sum1==sum2&&sum2==sum3){
				ans++;
			}
		}
	} 
	cout<<ans<<endl;
	return 0;
}

