#include<iostream>
using namespace std;
bool k=0;
int sum=0;
bool count(int a,int b){
	for(int i=a;i<=b;i++){
		k=1;
		for(int j=2;j<i;j++){
		if(i%j==0){
			k=0;
		}
	    }
	    if(k)sum++;
	}
}
int main() {
	int n,m;
	cin >> n >> m;
	if(n==1){
		n++;
	}
	count(n,m);
	cout<<sum;
	return 0;
}
