#include<bits/stdc++.h>
using namespace std;
int m,n,sum;
int main(){
	cin>>m>>n;
	for(int i=m;i<=n;i++){
	if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
	sum++;
	}
	cout<<sum;
	return 0;
}
