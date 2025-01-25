#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,sg,ans=0;
struct tree{
	int v,fa;
	bool g=0;
	vector<int> q;
}t[N];
bool zs(int x,int y)
{
	for(int i=0;i<t[x].q.size();i++)
		if(t[x].q[i]==y) return 1;
	return 0;
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i].v>>t[i].fa;
		if(t[i].fa==0)
			sg=i;
		else t[t[i].fa].g=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(!t[i].g){
			int x=i;
			while(t[x].fa!=sg){
				t[t[x].fa].v+=t[x].v;
				t[t[x].fa].q.push_back(x); 
				x=t[x].fa;
			}
			t[t[x].fa].v+=t[x].v;
		}
	}
	for(int i=1;i<=n;i++){
		if(i!=sg && t[i].g)
			t[t[i].fa].v-=t[i].v*(t[i].q.size()-1);
//		cout<<t[i].q.size()<<endl;
	}
//	for(int i=1;i<=n;i++)cout<<t[i].v<<endl;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		{
			if(i!=sg && j!=sg)
			{
				int x,y,z;
				if(zs(i,j))
				{
					x=t[sg].v-t[i].v;
					y=t[i].v-t[j].v;z=t[j].v;
				}
				else if(zs(j,i))
				{
					x=t[sg].v-t[j].v; 
					y=t[j].v-t[i].v;z=t[i].v;
				}
				else
				{
					x=t[sg].v-t[i].v-t[j].v;
					y=t[i].v;z=t[j].v;
				}	
				if(x==y && x==z)ans++;
			}
		}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
