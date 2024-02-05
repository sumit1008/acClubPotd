#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long i=0,j=0,ans=0,sum=0;
        map<int,int> mp;
        for(i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }
        if(k==mp.size()){
            ans=sum;
        }

        while(i<nums.size()){
            sum+=nums[i];
            sum-=nums[i-k];
            mp[nums[i-k]]--;
            mp[nums[i]]++;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            if(mp.size()==k){
                ans=max(sum,ans);
            }
            i++;
        }

        return ans;

    }
};
int main()
{
    cout<<"world";
}