#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findAnagramsHelper(string& s, string& out, vector<int>& ans) {
        int n = s.length();
        int m = out.length();

        if (m > n) {
            return;
        }
        map<char,int> omp;
        for(char& a : out){
            omp[a]++;
        }

        int i=0,j=m-1;
        while(j<n){
            string sub=s.substr(i,m);
            map<char,int> submp;
            for(char& a : sub){
                submp[a]++;
            }
            if(omp==submp){
                ans.push_back(i);
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
            
        }
        

        
    }

    vector<int> findAnagrams(string s, string out) {
        vector<int> ans;
        findAnagramsHelper(s, out, ans);
        return ans;
    }
};
int main()
{
    cout<<"world";
}