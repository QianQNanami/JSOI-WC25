#include<iostream>
using namespace std;
int a[100086];
int main(){
	int m,n,s=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		a[i]=i;
		for(int j=2;j<=i;j++)
			if(a[i]==1)
				break;
			else if(a[i]%2==0&&a[i]!=2){
				s=s;
				break;
			}
			else if(a[i]==2){
				s++;
				break;
			}
			else if(a[i]%j==0)
				break;
			else if(a[i]%j!=0){
				s=s+1;
				break;
			}
	}
	cout<<s;
	return 0;
}
