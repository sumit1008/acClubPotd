#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0,j=s1.size()-1;
        unordered_map<char,int> s1mp;
        for(char& a:s1){
            s1mp[a]++;
        }

        while(j<s2.size()){
            string sub=s2.substr(i,j-i+1);
            unordered_map<char,int> submp;
            for(char& a:sub){
                submp[a]++;
            }

            if(submp==s1mp){
                return true;
            }
            else{
                i++;j++;
            }
        }
        return false;

    }
};
int main()
{
    cout<<"world";
}