#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
bool pl(int n){
	bool flag=0;
	for(int i=0;i<6;i++){
		if(a[n][i]!=0){
			return 0;
		}
	}
	return 1;
}
int main(){
int m;
for(int i=0;i>=0;i++){
	for(int j=0;j<6;j++){
		cin>>a[i][j];
	}
	if(pl(i)){
		m=i;
		break;
	}
}
int cnt=0;
for(int i=0;i<m;i++){
	int l=0,r=5;
	queue<int>q;
	while(){
		q.push(6);
	    while(q.front()){
		    if(q.front()>=l){
			    for(int i=0;i<3;i++){
				    q.push(q.front()-l);
				     q.pop();
			    }
		    }else if(q.front()==0){
			    q.pop();
		    } 
		    if(q.front()>=r){
			    for(int i=0;i<3;i++){
				    q.push(q.front()-r);
				    q.pop();
			}
		    }else if(q.front()==0){
			    q.pop();
		    }   
	}
}

}
	return 0;                  
}
