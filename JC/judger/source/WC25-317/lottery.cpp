#include<bits/stdc++.h>
using namespace std;
int M,N;
int i,ans,c=1;
int main() {
	cin>>M>>N;
	//2,3,5,7,11,13,17;
    for(i=M;i<=N;i++){
    	while(c<i/2) c++;
		if(i%c!=0&&c>1) ans++;
	}
	cout<<ans;
	return 0;
}
