#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==0)
            {
                red++;
            }
            else if (nums[i]==1)
            {
                white++;
            }
            else if (nums[i]==2)
            {
                blue++;
            }
            
        }
        nums.clear();
        for (int i = 0; i < red; i++)
        {
            nums.push_back(0);
        }
        for (int i = 0; i < white; i++)
        {
            nums.push_back(1);
        }
        for (int i = 0; i < blue; i++)
        {
            nums.push_back(2);
        }


        // for(auto i: nums){
        //     cout<<i<<" ";
        // }
        
        
    }
};
using namespace std;
int main()
{
    cout<<"world";
}