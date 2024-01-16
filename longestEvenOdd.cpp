    #include<bits/stdc++.h>
    using namespace std;
int longestAlternatingSubarray(vector<int>& nums, int k) {
        int ans=0;

        int i=0;
        while(i<nums.size()){
            if(nums[i]%2==0 && nums[i]<=k){
                i++;
                int m=1;
                while(i<nums.size() ){
                    if((nums[i-1]%2 == nums[i] %2) || nums[i]> k){
                        break;
                    }
                    m++;i++;
                }
                i--;
                ans=max(ans,m);
            }
            i++;
        }
        return ans;
    }
    int main()
    {
        cout<<"world";
    }