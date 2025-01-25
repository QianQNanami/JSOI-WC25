#include<bits/stdc++.h>
#define lson r<<1
#define rson r<<1|1
using namespace std;
const int N=5e4+4;
int n,k,m,a[N],all;
struct node{
    int s,lft,rgt,lazy;
}T[N<<2];

void build(int r,int x,int y)
{
    T[r].lft=x,T[r].rgt=y,T[r].lazy=0;
    if(x==y)
    {
        T[r].s|=1<<a[x];
        return;
    }
    int mid=x+y >>1;
    build(lson,x,mid);build(rson,mid+1,y);
    T[r].s=T[lson].s|T[rson].s;
}

void change(int r,int x,int v)
{
    if(x<T[r].lft || T[r].rgt<x)return;
    if(T[r].lft==T[r].rgt && T[r].lft==x)
    {
        T[r].s=1<<v;
        return;
    }
    change(lson,x,v);change(rson,x,v);
    T[r].s=T[lson].s|T[rson].s;
}

int queryl(int r,int v)
{
    if(v|T[r].s>T[r].s)return -1;
    if(T[r].lft==T[r].rgt)
    {
        if(v==T[r].s)return T[r].lft;
        return -1;
    }
    int pos=0;
    int lpos=queryl(lson,v),rpos=queryl(rson,v);
    if(lpos!=-1)pos=max(pos,lpos);
    if(rpos!=-1)pos=max(pos,rpos);
    return pos;
}

int queryr(int r,int v)
{
    if(v|T[r].s>T[r].s)return -1;
    if(T[r].lft==T[r].rgt)
    {
        if(v==T[r].s)return T[r].lft;
        return -1;
    }
    int pos=n+1;
    int lpos=queryl(lson,v),rpos=queryl(rson,v);
    if(lpos!=-1)pos=min(pos,lpos);
    if(rpos!=-1)pos=min(pos,rpos);
    return pos;
}

int main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    scanf("%d %d %d",&n,&k,&m);
    all=(1<<(k+1))-1;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    build(1,1,n);
    for(int i=1;i<=m;i++)
    {
        int op,p,v;
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d %d",&p,&v);
            change(1,p,v);
        }
        else
        {
            if(T[1].s<all)printf("-1\n");
            else
            {
                int lpos=n+1,rpos=0;
                for(int i=0;i<=k;i++)
                {
                    int v=1<<i;
                    if(v|T[2].s==T[2].s)lpos=min(lpos,queryl(1,v));
                    if(v|T[3].s==T[3].s)rpos=max(rpos,queryr(1,v));
                }
                printf("%d\n",rpos-lpos+1);
            }
        }
    }
    return 0;
}
