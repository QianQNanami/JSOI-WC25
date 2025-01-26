#include<bits/stdc++.h>
using namespace std;
const int N=7;
long long box[N],bx;
vector<int> ans;
int main()
{
	while(true)
	{
		int t=0,w=36;
		for(int i=1;i<=6;i++)
			cin>>box[i];
		if(box[1]==0 && box[2]==0 && box[3]==0 && box[4]==0 && box[5]==0 && box[6]==0) break;
		t+=box[6];
		for(int i=1;i<=5;i++)
		{
			bx=box[i]*i*i+bx;
			if(box[i]==0) continue;
			while(bx>=w)
			{
				t++;
				bx-=w;
			}
		}
		t+=bx/w;
		ans.push_back(t);
	}
	for(int i=0;i<=ans.size()-1;i++)
		cout<<ans[i]<<endl;
	return 0;
}
