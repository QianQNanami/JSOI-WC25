#include<bits/stdc++.h>
using namespace std;
int s;
void fl(int a,int b){
	if((a-b)%2!=0||(a-b)/2==0){
		s++;
		return ;
	}
	if((a-b)%2==0&&(a-b)/2!=0){
		fl((a-b)/2,b);
		fl((a+b)/2,b);
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	fl(n,k);
	cout<<s;
	
	return 0;
}
