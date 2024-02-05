#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (nums[mid] < target) {
                st = mid + 1;
            } else if (nums[mid] > target) {

                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};
int main()
{
    cout<<"world";
}