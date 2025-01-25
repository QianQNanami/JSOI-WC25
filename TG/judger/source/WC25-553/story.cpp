#include <bits/stdc++.h>
using namespace std;
class Solution{
private:
    vector<int> nums;
    int K;
    int shortv(){
        vector<int> cnt(K+1,0);
        int L=0,R=0;
        int dist=0;
        int minLen=INT_MAX;
        while(R<nums.size()){
            if (++cnt[nums[R]]==1){
                dist++;
            }
            while(dist==K){
                minLen=min(minLen,R-L+1);
                if(--cnt[nums[L]]==0){
                    dist--;
                }
                L++;
            }
            R++;
        }
        return minLen==INT_MAX?-1:minLen;
    }
public:
    Solution(const vector<int>& a,int k):nums(a),K(k) {}
    void upv(int p,int nv){
        nums[p-1]=nv;
    }
    int getlen(){
        return shortv();
    }
};
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	ios::sync_with_stdio(0);
    int n,k,m;
    cin>>n>>k>>m;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution solution(nums,k);
    for (int i=0;i<m;i++){
        int type;
        cin>>type;
        if(type==1) {
            int p,nv;
            cin>>p>>nv;
            solution.upv(p,nv);
        }
		else if(type==2){
            int ans=solution.getlen();
            cout<<ans<<endl;
        }
    }
    return 0;
}
