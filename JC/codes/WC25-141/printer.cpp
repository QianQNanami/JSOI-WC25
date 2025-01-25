#include <bits/stdc++.h>
using namespace std;

queue <int> q,q1;

int main(){
	int n,t,a[105],ans=0,b[105];
	cin >> n >> t;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=t;i++){
		b[i]=a[i];
	}
	for(int i=t+1;i<=n;i++) q.push(i);
	for(int i=1;i<=t;i++) q1.push(i);	
	for(int i=t+1;i<=n;i++){
		if(a[i]<=a[i+1]){
			q.push(q.front());	
			q.pop();
			if(q.front()==1) break;
			ans++;		
		}else{		
			if(q.front()==1){
				break;
			}
			q.pop();
			ans++;
		}
	}
	if(t!=0)
		for(int i=1;i<=t;i++){
			if(b[i]<=b[i+1]){
				q1.push(q1.front());
				q1.pop();
				ans++;
			}else{
				if(q.front()==1){
					break;
				}
				q.pop();
				ans++;
			}
		}
	cout << ans;
	return 0;
}

