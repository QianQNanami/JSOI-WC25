#include<bits/stdc++.h>
using namespace std;
int n,v,p,root,all,ans1,ans2,tc,fa[100002][20];
multiset<int> is_one_third,is_two_thirds;
struct node{
	int father,val,sum,dep;
	bool oneThird=false; 
	vector<int> sons;
}k[100002];
void get_prepared(int cur,int dep){
	k[cur].dep=dep;
	for(int i:k[cur].sons){
		get_prepared(i,dep+1);
		k[cur].sum+=k[i].sum;
	}
	k[cur].sum+=k[cur].val;
	if(k[cur].sum==all/3){
		is_one_third.insert(cur);
		k[cur].oneThird=true;
	}
	else if(k[cur].sum==tc){
		is_two_thirds.insert(cur);
	}
}
void go_for_it(int cur){
	for(int i:k[cur].sons){
		if(k[i].oneThird) ans1++;
		go_for_it(i); 
	}
}
bool check_relation(int c1,int c2){
	if(c1==c2)return false;
	if(k[c2].dep>k[c1].dep)swap(c1,c2);
	for(int i=18;i>=0;i--){
		if(k[fa[c1][i]].dep>=k[c2].dep)c1=fa[c1][i];
	}
	return c1!=c2;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v>>p;
		all+=v;
		k[i].val=v;
		k[i].father=p;
		fa[i][0]=p;
		if(p==0)root=i;
		else k[p].sons.push_back(i);
	}
	if(all%3!=0){
		cout<<0;
		return 0;
	}
	tc=all/3;
	tc*=2;
	get_prepared(root,1);
	for(int i:is_two_thirds)go_for_it(i);
	for(int i=1;i<=18;i++)for(int j=1;j<=n;j++)fa[j][i]=fa[fa[j][i-1]][i-1];
	for(int i:is_one_third)for(int j:is_one_third)if(check_relation(i,j))ans2++;
	cout<<ans1+ans2/2;
}
