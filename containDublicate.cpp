#include<bits/stdc++.h>
using namespace std;
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            if(mp.find(a)!=mp.end()){
                if(abs(mp[a]-i)<=k){
                    return true;
                }
            }
            mp[a]=i;
            
        }
        return false;
    }
int main()
{
    cout<<"world";
}