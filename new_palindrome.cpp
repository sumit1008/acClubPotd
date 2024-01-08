#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        unordered_map<char, int> mp;
        for(auto a: s) {
            mp[a]++;
        }
        
        int count = 0,flag=0;
        
        
        if(mp.size()==1){
            cout<<"NO"<<endl;
            continue;
        }

        if(mp.size()==2){
            for(auto a:mp){
                if(a.second==1){
                    cout<<"NO"<<endl;
                    flag=1;
                    
                }

            }
            if(flag==0)
            cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
