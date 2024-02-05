#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> preSumCount;

        preSumCount[0] = 1;

        for (int num : nums) {
            sum += num;

            
            if (preSumCount.find(sum - k) != preSumCount.end()) {
                count += preSumCount[sum - k];
            }

            
            preSumCount[sum]++;
        }

        return count;
    }
};

int main()
{
    cout<<"world";
}