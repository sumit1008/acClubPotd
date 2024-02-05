#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd, ans;

        for (auto a : nums) {
            if (a & 1)
                even.push_back(a);
            else
                odd.push_back(a);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        int x = 0, y = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i & 1) {
                ans.push_back(even[x]);
                x++;
            } else {
                ans.push_back(odd[y]);
                y++;
            }
        }
        return ans;
    }
};
int main()
{
    cout<<"world";
}