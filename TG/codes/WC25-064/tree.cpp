#include<iostream>
using namespace std;
int n;
struct node{
	int w,father;//È¨ÖµºÍ¸¸Ç×±àºÅ 
}tree[10005];
void setup(int s){
	if(s==1)return;
	tree[tree[s].father].w+=tree[s].w;
	setup(s-1);
}
bool a_in_b(node a,node b){
	if(tree[a.father].father==b.father)return true;
	if(a.father==1)return false;
	return a_in_b(tree[a.father],b);
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);	
	cin>>n;
	int v,p;
	for(int i=1;i<=n;i++){
		cin>>v>>p;
		tree[i].w=v;
		tree[i].father=p;
	}
	setup(n);
	if(tree[1].w%3!=0){
		cout<<0;
		return 0;
	}
	int sum=0;
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(!a_in_b(tree[j],tree[i])){
				if(tree[i].w==tree[j].w&&tree[1].w==tree[i].w*3){
					sum++;
				}
			}
			else{
				if(tree[i].w==tree[j].w*2){
					sum++;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
