#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,e,f=1;
int sum;

int main()
{
	while(1)
	{
		cin>>a>>b>>c>>d>>e>>f;
		if(!(a||b||c||d||e||f))break;
		sum=a*1+b*4+c*9+d*16+e*25+f*36;
		if(sum%36)cout<<sum/36+1<<endl;
		else cout<<sum/36<<endl;
	}
	return 0;
}
