#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums) {
        int i=0,ans=0, maxi=0,last=0,n=nums.size();
        if(n==1) return 0;
        while(i<n-1){
            maxi=max(maxi,nums[i]+i);
            if(last==i){
                last=maxi;ans++;
            }
            i++;
        }
        return ans;
    }
int main()
{
    cout<<"world";
}