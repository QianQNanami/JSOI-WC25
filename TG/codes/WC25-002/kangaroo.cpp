#include<bits/stdc++.h>
using namespace std;
const int N=50005;
int a[N];
int n,cnt;
priority_queue<int>q;
queue<int>q1;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(x); 
	} 

	for(int i=1;i<=n;i++){
		if(!q1.empty() && q.top()<=q1.front()/2){
			q1.pop();
			cnt++;
		}
		else{
			q1.push(q.top());
		}
		q.pop();
	}
	cout<<cnt;
	return 0;
}
