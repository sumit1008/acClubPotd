#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n/10==0){ cout<<n<<endl;continue;}
        //cout<<n/100;
        if(n/100==0){
            cout<<n%10<<endl;continue;
        }
        else{
            int ans=INT_MAX;
            while(n>0){
                
                int r=n%10;
                ans=min(r,ans);
                n/=10;
            }
            cout<<ans<<endl;
        }


    }
}