#include<iostream>
using namespace std;
queue<int>q;
int main(){
	int n;
	cin>>n;
	int f[n];
	for(int i=1;i<=n;i++)
	if(f[i]>f[i++])
	swap(f[i],f[i++]);
	int lisn=0;
	lisn+=i;
	
	
	
	return 0;
}
