#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,ans=0,g[70005],tot=0;
	for(int i=1;;i++)
	{
		tot++;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			for(int i=1;i<tot;i++)cout<<g[i]<<endl;
			return 0;
		}
		ans=a+b*4+c*9+d*16+e*25+f*36;
		if(ans%36==0)g[i]=ans/36;
		else g[i]=ans/36+1;
	} 
	return 0;
}
