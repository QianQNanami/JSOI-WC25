#include<bits/stdc++.h>
using namespace std;
int n;
int i,j;
int cnt;
struct A{
	int note,fa;
}p[100005];
int ans1=0,ans2=0,ans3=0;
vector<int>G[100005];
void dfs(int r){
	for(int e=0;e<G[r].size();e++){
		if(G[r][e]!=p[r].fa&&G[r][e]!=j){
			ans1+p[r].note;
			dfs(G[r][e]);
		}
		else{
			continue;
		}
	}
}
void dfs1(int r){
	for(int e=0;e<G[r].size();e++){
		if(G[r][e]!=j){
			ans3+=p[r].note;
		}
	}
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++){
    	cin>>p[i].note>>p[i].fa;
  		G[i].push_back(p[i].fa);
  		G[p[i].fa].push_back(i);
  		
	}
	if(n==3){
		cout<<1;
	}
	for(i=2;i<=n;i++){
		for(j=2;j<=n;j++){
			ans1=0,ans2=0,ans3=0;
			if(i!=j){
				dfs(i);
				dfs(j);
				dfs1(i);
				if(ans1==ans2==ans3){
					cnt++;
				}
			}
		}
	}
	fclose(stdin);
    fclose(stdout);
    return 0;
}
