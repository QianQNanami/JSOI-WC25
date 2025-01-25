#include<bits/stdc++.h>
using namespace std;
string a,b,c;
string e;
int n;
int q;
int a1;
int main(){
	cin>>n;
	getline(cin,a);
	cin>>q;
	while(q){
		cin>>a1;
		if(a1==1){
			cin>>b>>c;
			for(int j=1;j<=a.size();j++){
				if(a[j]==b[1]){
					e=a.substr(j+1,a.size()-j);
					a=a+c+e;
				}
			}
		}else if(a1==2){
			cin>>b;
			for(int j=1;j<=a.size();j++){
				for(int k=j;k<=a.size();k++){
					if(a[j]==b[1]&&a[k]==b[b.size()]){
						a.erase(j,k-j+1);
					}
				}
			}
		}
		q--;
	}
	cout<<a;
	return 0;
}

