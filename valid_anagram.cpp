#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;
        for(auto a:s){
            mps[a]++;
        }
        for(auto a:t){
            mpt[a]++;
        }
        if(mps==mpt) return true;
        return false;
    }
int main()
{
    cout<<"world";
}