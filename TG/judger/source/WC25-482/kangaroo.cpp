#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 5;
int n,a[N],ans;
deque<int> aq;
bool vis[N];
bool cmp(int a,int b)
{
	return a>b;
}
signed main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		aq.push_back(i);
		if(!aq.empty()&&a[aq.front()]>=a[i]*2){
			aq.pop_front();
			ans++;
			aq.pop_back();
		}
	}
	cout<<ans<<endl;
	return 0;
}
