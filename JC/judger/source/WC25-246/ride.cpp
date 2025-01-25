#include<bits/stdc++.h>
using namespace std;
string a1,a2;
int a1sum,a2sum;
int main(){
	cin>>a1>>a2;
	a1sum=a1.size();
	a2sum=a2.size();
	while(a1sum)
	{
	a1[a1sum]=char(int(a1[a1sum])-64);
	a1sum--;
    }
    while(a2sum)
	{
	a2[a2sum]=char(int(a2[a2sum])-64);
	a2sum--;
    }
    
	return 0;
}
