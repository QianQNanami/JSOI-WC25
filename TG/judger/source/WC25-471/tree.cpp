#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
struct Node{
	int boss;
	vector<int>son;
	int w;
}a[N];
int sum[N],n,first;
void DFS(int x){
	if(!a[x].son.size()){
		sum[x]=a[x].w;
		return;
	}
	for(int i=0;i<a[x].son.size();i++){
		DFS(a[x].son[i]);
		sum[x]+=sum[a[x].son[i]];
	}
	sum[x]+=a[x].w;
}
bool check(int mid){
	return sum[mid]<=(first/3);
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[i].w,&a[i].boss);
		if(a[i].boss==0)first=i;
		a[a[i].boss].son.push_back(i);
	}
	DFS(first);
	first=sum[first];
	
	for(int i=1;i<=n;i++)cout<<sum[i]<<" ";
	cout<<endl;
	sort(sum+1,sum+n+1);
	if((first/3)*3!=first){
		printf("0\n");
		return 0;
	}
	int l=1,r=n;
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid))l=mid+1;
		else r=mid;
	}
	l--;
	int sumn=0;
	while(sum[l]==(first/3)){
		cout<<sum[l-1];
		sumn++;
		l--;
	}
	cout<<sumn<<endl;
	printf("%d\n",sumn*(sumn-1)/2);
	return 0;
}

