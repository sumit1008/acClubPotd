#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="codeforces";
    while(t--){

        string temp;
        cin>>temp;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=temp[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}