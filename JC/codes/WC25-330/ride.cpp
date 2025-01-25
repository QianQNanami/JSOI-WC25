#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, s1;
	cin >> s >> s1;
	int a = 1, b = 1;
	for(int i = 0;i < s.size();i++)
	{
		a *= int(s[i]) - 64;
	}
	for(int i = 0;i < s1.size();i++)
	{
		b *= int(s1[i]) - 64;
	}
	if(a % 47 == b % 47)
	{
		cout << "GO"<<endl;
	}else
	{
		cout <<"STAY"<<endl;
	}
	return 0;
}
