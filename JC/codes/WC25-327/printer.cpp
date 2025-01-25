#include<bits/stdc++.h>
using namespace std;
int n,t;
int l;int e=0;
int s=0;
int as=0;
int q[10000];
int front =0;
int end=0;
int main(){
	cin>>n>>t;
	s=t;
	for(int i=0;i<n;i++){
		cin>>l;
		q[++end]=l;
	}
	for(int i=0;i<n;i++){
			if(q[front]<q[i]){
				e=q[front];
				front++;
				q[++end]=e;				
				if(i==s){
					s=end;
				}else{
					s++;
				}

			}else{
				if(front=s){
					break;
				}else{
					as++;
					front++;
				}
					
			}
		}
	
	printf("%d",as);
	return 0;
}

