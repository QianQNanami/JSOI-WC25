#include<bits/stdc++.h>
using namespace std;
int arra(int a,int b){
	if(a-b<=0||a%b!=0){
		return 1;
	}
	return arra(a/2+b-1,b)+arra(a-(a/2+b-1),b);
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<arra(n,k);
	return 0;
} 
