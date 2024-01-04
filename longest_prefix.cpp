#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string common(string str, string pre) {
        string ans;
        for (int i = 0; i < pre.size() && i < str.size(); i++) {
            if (pre[i] != str[i]) {
                break; // Stop the loop when characters don't match
            }
            ans.push_back(pre[i]);
        }
        return ans;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }

        string currPre = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            currPre = common(strs[i], currPre);
        }
        return currPre;
    }
};
int main()
{
    cout<<"world";
}