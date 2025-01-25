#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name;
	string star;
	cin>>name>>star;
	int namenum=1;
	int starnum=1;
	for(int i=0;i<name.size();i++)
	{
		namenum=(int(name[i])-64)*namenum;
	}
	for(int i=0;i<star.size();i++)
	{
		starnum=(int(star[i])-64)*starnum;
	}
	if(namenum%47==starnum%47)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
}
