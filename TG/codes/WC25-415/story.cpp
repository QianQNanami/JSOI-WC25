#include <bits/stdc++.h>
//#define int long long
#define _start ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define lc(x) x<<1
#define rc(x) x<<1|1
#define mid(l,r) int mid=l+r>>1
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N=2e5+5;
int t[4*N],tag[4*N];
int a[N];
int n,k,m;
int Change(int x){
	return (1<<(x-1));
}
void make_up(int p){
	//cout << "这是一条用于测试程序运行进程的日志，执行make_up函数,结果t["<< p << "]结果为" << t[p] << endl;
	t[p]=t[lc(p)]|t[rc(p)];
}
int Number_of_1(int x){
	int Num=0;
	while(x){
		if(x&1)Num++;
		x/=2;
	}
	//cout << "这是一条用于测试程序运行进程的日志，执行Number_of_1函数,结果为:" << Num << endl;
	return Num;
}
void build(int p,int l,int r){
	if(l==r){
		t[p]=Change(a[l]);
		//cout << t[p] << ' ';
		return ;
	}
	mid(l,r);
	build(lc(p),l,mid);
	build(rc(p),mid+1,r);
	if(l<r)
		make_up(p);
}
void spread(int p,int l,int r){
	//cout << "这是一条用于测试程序运行进程的日志，目前在执行spread函数,参数l,r分别为:" << l << ',' << r << endl;
	t[p]<<=tag[p];
	if(l!=r){
		tag[lc(p)]+=tag[p];
		tag[rc(p)]+=tag[p];
	}
	tag[p]=0;
}
pii ask(int p,int &Goal,int l,int r,pii cal){
	if(l>r)return mp(1e9,-1);
	if(Goal==0)return cal;
	spread(p,l,r);
	//cout << "这是一条用于测试程序运行进程的日志，目前在执行ask函数,参数p,l,r分别为:" << p << ' ' << l << ',' << r << endl;
	//cout << t[p] << ' ' << Goal << "   " << (t[p]&Goal) << ";" << l << ' ' << r << endl;
	if((r-l+1==Number_of_1(t[p]))&&((t[p]&Goal)==t[p])){
		Goal-=t[p];
		return mp(l,r);
	}
	if((t[p]&Goal)==0)return mp(1e9,-1);
	mid(l,r);
	pii calc1,calc2;
	int tmp=Goal;
	calc1=ask(lc(p),Goal,l,mid,cal);
	calc2=ask(rc(p),Goal,mid+1,r,cal);
	pii cal1=mp(min(calc1.first,calc2.first),max(calc1.second,calc2.second));
	calc1=ask(rc(p),tmp,mid+1,r,cal);
	calc2=ask(lc(p),tmp,l,mid,cal);
	pii cal2=mp(min(calc1.first,calc2.first),max(calc1.second,calc2.second));
	if(cal1.second-cal1.first+1<=cal2.second-cal2.first+1)cal=cal1;
	else cal=cal2;
	if(l<r)
		make_up(p);
	return cal;
}
void reset(int p,int x,int y,int l,int r,int k){
	//cout << "这是一条用于测试程序运行进程的日志，目前在执行reset函数,参数p,l,r分别为:" << p << ' ' << l << ',' << r << endl;
	spread(p,l,r);
	if(l==r&&r==y){
		t[p]=Change(k);
		return ;
	}
	if(l>y||r<x)return ;
	mid(l,r);
	reset(lc(p),x,y,l,mid,k);
	reset(rc(p),x,y,mid+1,r,k);
	if(l<r)
		make_up(p);
	return ;
}
signed main(){
	_start;
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin >> n >> k >> m;
	int tmp=k;k=0;
	for(tmp;tmp>=1;tmp--)k+=Change(tmp);
	//cout << k << endl;
	for(int i=1;i<=n;i++)cin >> a[i];
	build(1,1,n);//cout << endl;
	for(int i=1;i<=m;i++){
		int op;cin >> op;
		if(op==1){
			int op1,op2;cin >> op1 >> op2;
			reset(1,op1,op1,1,n,op2);
		}
		else{
			int tmp=k;
			pii Ans=ask(1,tmp,1,n,mp(1e9,-1));
			if(tmp!=0){
				cout << -1 << endl;
				continue;
			}
			//cout << Ans.first << ' ' << Ans.second << endl;
			cout << Ans.second-Ans.first+1 << endl;
		}
	}
	return 0;
}
/*
6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2

*/
