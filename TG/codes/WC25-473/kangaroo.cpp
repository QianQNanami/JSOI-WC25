#include<bits/stdc++.h>
using namespace std;

int n,a[421421],s=0;
int x=0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout); 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	sort(a+1,a+n+1);
	
	x=n/2+1;
	for(int i=1;i<=n/2;i++){
		bool flag = true;
		while(!(a[i]*2<=a[x])){
			x++;
			if(x==n+1){
				flag=false;
			}
		}
		if(flag){
			s++;
			x++;
		}
		else break;
		
	} 
	printf("%d\n",s); 
	return 0;
}
