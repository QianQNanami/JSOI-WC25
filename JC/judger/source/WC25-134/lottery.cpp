#include<bits/stdc++.h>
using namespace std;
int n,m,s=0;
int main(){
	cin>>m>>n;
		for(int j=m;j<n;j++){
			for(int c=1;c<=j;c++){
				if(j%c==0){
					s++;
				}
			}
		}
		cout<<s;
	return 0;
}

