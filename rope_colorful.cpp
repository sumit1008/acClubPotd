#include<bits/stdc++.h>
using namespace std;
int minCost(string colors, vector<int>& Time) {
        int n=colors.length();
        if(n==1) return 0;
        int ans=0;
        int i=0,j=1;
        while( j<n ){
            if( colors[i] == colors[j] ){
                ans+=min(Time[i],Time[j]);
                Time[j] = max(Time[i], Time[j]);
            }
            i++;
            j++;
        }
        return ans;
    }
int main()
{
    cout<<"world";
}