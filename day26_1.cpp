#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        long long ans=0,i=0,j=skill.size()-1,team=0;
        team=skill[i]+skill[j];
        while(j>i){
            ans+=skill[i]*skill[j];
            if(team!=skill[i]+skill[j]){
                return -1;
            }
            i++;
            j--;
        }

        return ans;


    }
};
int main()
{
    cout<<"world";
}