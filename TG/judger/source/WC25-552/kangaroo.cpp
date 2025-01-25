#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,a[50010],ans;
priority_queue<int,vector<int>,greater<int>>q1,q2;

inline int read(){
	int s=0;
	bool f=0;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-')f^=1;
		c=getchar();
	}
	while(isdigit(c)){
		s=(s<<1)+(s<<3)+(c^48);
		c=getchar();
	}
	return f==0?s:-s;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i)
		a[i]=read();
	sort(a+1,a+1+n);
	for(int i=1;i<=n;++i){
		if(!q1.empty()&&q1.top()*2<=a[i]){
			q1.pop();
			q2.push(a[i]);
			++ans;
		}
		else{
			if(!q2.empty()){
				q1.push(q2.top());
				q2.pop();
				q2.push(a[i]);
			}
			else q1.push(a[i]); 
		}
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

