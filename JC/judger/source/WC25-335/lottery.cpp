#include<bits/stdc++.h>
using namespace std;
bool ab(int a){
	if(a==1)
		return false;
	for(int i=2;i*i<=a;i++){
		if(a%i==0)
			return false;
	}
	return true;
}
int main(){
	int a,b,ans=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		if(ab(i))
			ans++;
	cout<<ans<<endl;
	return 0;
}
