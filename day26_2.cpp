#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,z=0;
        int ans=0;
        int temp=k;
        while(j<nums.size()){
            if(nums[j]==0){
                z++;}

            while(z>k){
                if(nums[i]==0){
                    z--;
                }
                i++;
            }
            j++;
            ans=max(ans,j-i+1);
        }
        
        ans=max(ans,j-i+1);
        return ans-1;
    }
};
int main()
{
    cout<<"world";
}