#include<bits/stdc++.h>
using namespace std;
int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int max=0;
        int n=nums.size();
        
        for(int i=0;i<n/2;i++){
           int sum=nums[i]+nums[n-1-i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
        
    }
int main()
{
    cout<<"world";
}