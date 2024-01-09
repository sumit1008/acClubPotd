#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        cin>>v[0];
        int flag=0;
        int mini=INT_MAX;
        for(int i=1 ;i <n ;i++){
            cin>>v[i];
            if(v[i]<v[i-1]){
                flag=1;
                
            }
            mini=min(mini,v[i]-v[i-1]);
        }
        if(flag){
            cout<<0<<endl;
        }
        else{
            if(mini%2==0){
                cout<<(mini+2)/2<<endl;
            }
            else{
                cout<<(mini+1)/2<<endl;
            }
        }
    }
}