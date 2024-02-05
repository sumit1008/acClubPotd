#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        unordered_map<char,int> mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                ans=max(ans,j-i);
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};
int main()
{
    cout<<"world";
}