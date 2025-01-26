#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("box.in","r",stdin);
	unsigned i;
	for(i=0;;i++)
	{
		unsigned a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		unsigned long long anus=a+4*b+9*c+16*d+25*e+36*f;
		if(anus==0)
			break;
		else if(anus%36==0)
			cout<<anus/36<<endl;
		else
			cout<<anus/36+1<<endl;
	}
	return 0;
}
