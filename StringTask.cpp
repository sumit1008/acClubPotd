#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(auto &a:s){
        a=tolower(a);
    }
    string ans;
    ans.push_back('.');
    for(auto a:s){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y'){
            continue;
        }
        else{
            ans+=a;
            
            ans+='.';
        }
    }
    ans.pop_back();
    cout<<ans;

}