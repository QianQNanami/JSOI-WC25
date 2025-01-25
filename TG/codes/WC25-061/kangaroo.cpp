#include <bits/stdc++.h>
using namespace std;
int n,sum;
priority_queue <int,vector<int>,greater<int> > q,qr;
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        q.push(tmp);
        qr.push(tmp/2);
    }
    while (!q.empty() && !qr.empty() ){
        int now=q.top();
        q.pop();
        while (!qr.empty()){
            int r=qr.top();
            if (r<now) qr.pop();
            if (qr.empty()) break; 
            if (r>=now){
                sum++;
                break;
            }
        }
        if (q.empty() || qr.empty()) break;
    }
    cout<<sum;
    return 0;
}
