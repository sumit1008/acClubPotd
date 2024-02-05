#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1,ans=0;
        while (st <= end) {
            int mid = (st + end) / 2;
            ans=mid;
            if (nums[mid] < target) {
                st = mid + 1;
            } else if (nums[mid] > target) {

                end = mid - 1;
            } else {
                return mid;
            }
        }
        if(nums[ans]>target)
        return ans;
        else
        return ans+1;
    }
};
int main()
{
    cout<<"world";
}