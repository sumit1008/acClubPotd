#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        int op;
        cin>>op;
        string s;
        cin>>s;

        for(int j=0;j<op;j++){
            if(s[j]=='U'){
                v[i]--;
                if(v[i]<0) v[i]=9;
            }
            else{
                v[i]++;
                if(v[i]>9) v[i]=0;
            }
        }
    }
    for(auto a:v){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}