#include<bits/stdc++.h>
using namespace std;
int main(){
	int total=1,cnt=1;
    string h,z;
	cin>>h>>z;
	for(int i=1;i<=h.size();i++)
	{
		total==h[i]-64*total;
	}
	for(int i=1;i<=z.size();i++)
	{
		cnt==z[i]-64*cnt;
	}
	if(cnt%47==total)
	{
		cout<<"GO"<<endl;
	}
	else
	{
		cout<<"STAY"<<endl;
	}
	
	return 0;
}
