#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,x=0;
	cin>>m>>n;
	int s=n-m;
	for(int i=1;i<=s;i++){
		if(s%2==0){
			while(s!=0){
				s-=2;
				x++;
			}
		}
		if(s%2==1){
			while(s!=0){
				s-=2;
				x++; 
				if(s==3)
				{
					x++;
					s-=3;
				}
			}
		}
	}
	cout<<x;
	return 0;
}
