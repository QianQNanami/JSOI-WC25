#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int sum = 0;
	cin>>n>>m;
	if(m - n > 1){
		for(int i = n;i<=m;i++){
			for(int j = 2;j<=sqrt(m);j++){
				if(i>=j && i%j != 0){
					sum ++;
				}
			}
		}
		cout<<sum;
	}
}
