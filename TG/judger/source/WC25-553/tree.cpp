#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
struct node{
	int a,b;
}k[N];
vector<int> tree[N];
int v[N];
int p[N];
int s[N];
int cnt[N];
void dfs(int n){
    s[n]=v[n];
    for(int c : tree[n]){
        dfs(c);
        s[n]+=s[c];
    }
}
bool check(int x,int y){
    int sum1=s[x];
    int sum2=s[y];
    int r=s[1];
    if(p[x]==p[y]){
        int t=s[p[x]];
        int res=t-sum1-sum2;
        return sum1==sum2&&sum2==res;
    }
	else{
        int p1=s[p[x]];
        int p2=s[p[y]];
        int res=r-sum1-sum2;
        return sum1==sum2&&sum2==res;
    }
}
bool cmp(node x,node y){
	return x.b<y.b;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
    cin>>n;
    int root=0;
    int tmp=0;
    for(int i=1;i<=n;i++){
        cin>>k[i].a>>k[i].b;
        tmp+=k[i].a;
        v[i]=k[i].a;
        p[i]=k[i].b;
        if(p[i]==0){
            root=i;
        }
		else{
            tree[p[i]].push_back(i);
        }
		cnt[p[i]]++;
    }
    bool flag=0;
    for(int i=0;i<n;i++){
    	if(cnt[i]>1)flag=1;
	}
	if(!flag){
		sort(k+1,k+n+1,cmp);
		int ans1=0,ans2=0;
		for(int i=1;i<=n;i++){
			if(ans1<tmp){
				ans1+=v[i];
			}
			if(ans1>tmp){
				cout<<0<<endl;
				return 0;
			}
			if(ans1==tmp){
				ans2+=v[i];
			}
			if(ans2>tmp){
				cout<<0<<endl;
				return 0;
			}
		}
		cout<<1<<endl;
		return 0;
	}
    dfs(root);
    int ans=0;
    for(int i=2;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(check(i,j)){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
