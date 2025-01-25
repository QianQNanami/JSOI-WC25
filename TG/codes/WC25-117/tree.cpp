#include<bits/stdc++.h>
using namespace std;
struct childs{
	int num;
	long long sum;
	bool operator < (const childs &nextt) const{
		return sum < nextt.sum;
	}
	//bool operator == (const childs &nextt) const{
	//	return sum == nextt.sum;
	//}
};
struct point{
	int v,f=-1,s=0;
	//int changeNum;
	vector<int> c;
}a[100005];
int n,ro;
long long ans;
childs s[100005];
int dfs(int x){
	if (!a[x].s){
		a[x].s=a[x].v;
		for (auto &&i:a[x].c){
			//a[x].c[i].sum=dfs(a[x].c[i].num);
			//a[x].s+=a[x].c[i].sum;
			a[x].s+=dfs(i);
		}
		//sort(a[x].c.begin(),a[x].c.end());
		s[x].sum=a[x].s;
		s[x].num=x;
	}
	return a[x].s;
}
/*
long long find(int be,int en,int s){
	int p;
	long long r=0LL;
	if (en == -1 && a[be].s == s*2){
		p=lower_bound(a[be].c.begin(),a[be].c.end(),s)-a[be].c.begin();
		while (p < a[be].c.size() && a[be].c[p] == s){
			r+=1LL;
			p++;
		}
	}
	else if (en != -1 && a[be].s == s*3){
		int pos=en;
		while (pos != 0){
			//a[pos].changeNum=s;
			a[pos].s-=s;
			pos=a[pos].f;
		}
		sort(a[be].c.begin(),a[be].c.end());
		p=lower_bound(a[be].c.begin(),a[be].c.end(),s)-a[be].c.begin();
		while (p < a[be].c.size() && a[be].c[p] == s){
			r+=1LL;
			p++;
		}
		int pos=en;
		while (pos != 0){
			a[pos].s+=s;
			//a[pos].changeNum=0;
			pos=a[pos].f;
		}
		sort(a[be].c.begin(),a[be].c.end());
	}
	return r;
}
*/
long long check(int x){
	int fs=a[a[x].f].s-a[x].s;
	long long r=0LL;
	if (fs > a[x].s){
		int pos=x;
		while (pos != 0){
			s[pos].sum-=a[x].s;
			pos=a[pos].f;
		}
		sort(s+1,s+n+1);
		int p;
		//int p=lower_bound(s+1,s+n+1,a[x].s)-s;
		while (p <= n && s[p].sum == a[x].s && fs-s[p].sum == a[x].s){
			p++;
			r+=1LL;
		}
		pos=x;
		while (pos != 0){
			s[pos].sum+=a[x].s;
			pos=a[pos].f;
		}
	}
	else if (fs < a[x].s){
		//r+=find(x,-1,fs);
		
	}
	return r;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d %d",&a[i].v,&a[i].f);
		a[a[i].f].c.push_back(i);
		if (a[i].f == 0){
			ro=i;
		}
	}
	dfs(0);
	/*
	for (int i=1;i<=n;i++){
		printf("%d: %d\n",i,a[i].s);
		for (auto &&j:a[i].c){
			printf("%d\n",j.num);
		}
	}
	*/
	for (int i=1;i<=n;i++){
		if (i != ro){
			ans+=check(i);
		}
	}
	printf("%lld\n",ans);
	return 0;
}
