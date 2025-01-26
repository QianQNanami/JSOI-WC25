#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,sum;
int main()
{
	while(1)
	{
		sum=0;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
		{
			break;
		}
		sum=sum+a+b*4+c*9+d*16+e*25+f*36;
		cout<<ceil(sum/36)<<endl;
	}
}
